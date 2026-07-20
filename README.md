<p align="center"><img src="https://i.imgur.com/xFXWiU9.png" alt="Plugin-SDK logo"></p>

# plugin-sdk-sa

**Plugin-SDK for GTA: San Andreas, corrected and expanded with findings verified against the original PC game.**

This is an actively developed fork of [Plugin-SDK](https://github.com/DK22Pac/plugin-sdk), focused on GTA: San Andreas. It keeps the familiar workflow and progressively improves the game's definitions using our complete reverse-engineered codebase.

> **In one sentence:** this is a C++ modding SDK—not a mod, not a game download, and not an AI tool you need to run.

## Why does this repository exist?

Plugin-SDK gives mod authors convenient C++ access to the game's classes, functions, globals, events, and hooks. Some GTA: San Andreas declarations are incomplete or differ from the original executable, however. A wrong field offset, class size, function signature, or address can cause anything from a compiler error to a hard-to-debug crash.

This repository brings verified knowledge from the reverse-engineering project back into the SDK modders already know. That currently includes:

- corrected class layouts, field offsets, sizes, signatures, and return types;
- completed GTA: San Andreas classes that previously contained unknown data;
- newly exposed functions, globals, pools, and hooks;
- corrected enums, constants, and mappings.

The reverse is complete; **porting all useful findings into this SDK is ongoing**. Check the [commit history](https://github.com/Dryxio/plugin-sdk-sa/commits/master/) to see what has already landed.

## What does “LLM-assisted” mean?

LLMs and [`auto-re-agent`](https://github.com/Dryxio/auto-re-agent) helped analyze and organize the reverse-engineering work. They are not part of the SDK and do not run in your plugin or in GTA: San Andreas.

Corrections are not accepted because an LLM suggested them. Candidate findings are checked against the game in both decompiled code and assembly before they are transferred to the reversed source and then to Plugin-SDK. The executable is the source of truth.

```text
GTA:SA executable -> decompilation + assembly checks -> reviewed reverse -> Plugin-SDK correction
```

## Supported target

The active focus is the **classic 32-bit Windows version of GTA: San Andreas**. New callable addresses and ABI-sensitive changes are verified for both supported GTA:SA 1.0 US executables: Compact and Hoodlum.

The GTA III, Vice City, GTA IV, and Definitive Edition directories are still present because this repository preserves Plugin-SDK's upstream history and structure. They are not the focus of this project. For development unrelated to classic GTA: San Andreas, use the [upstream Plugin-SDK repository](https://github.com/DK22Pac/plugin-sdk).

## Quick start on Windows

You will need:

- Visual Studio 2022 with the **Desktop development with C++** workload;
- a classic GTA: San Andreas installation configured to load ASI plugins;
- Git, or a ZIP download of this repository.

Then:

1. Clone this repository:

   ```powershell
   git clone https://github.com/Dryxio/plugin-sdk-sa.git
   ```

2. Run `installer-launcher.exe` from the repository root.
3. Set the Plugin-SDK path to this checkout and set your GTA: San Andreas directory.
4. Generate `plugin.sln`, then build the GTA: San Andreas SDK in Debug and/or Release mode.
5. Use the same launcher to create a plugin project and select **GTA San Andreas** as its target.
6. Build the generated solution. The result is an `.asi` plugin that can be loaded by the game.

The upstream [setup guide](https://github.com/DK22Pac/plugin-sdk/wiki/Set-up-plugin-sdk) and [first-plugin guide](https://github.com/DK22Pac/plugin-sdk/wiki/Creating-a-new-plugin-in-plugin-sdk) show the launcher screens and the full Visual Studio workflow. When those guides tell you to download or clone Plugin-SDK, use **this repository** instead.

> Already have a Plugin-SDK mod? Point your `PLUGIN_SDK_DIR` environment variable at this checkout, rebuild the SDK and your plugin, and treat the switch like a dependency upgrade. Do not mix headers from one checkout with libraries built from another. The inherited [API migration notes](README_breaking_changes.md) cover recent upstream renames and refactors.

## Where should I look?

| Path | What it contains |
| --- | --- |
| [`plugin_sa/game_sa`](plugin_sa/game_sa) | GTA: San Andreas classes, functions, globals, enums, and metadata |
| [`examples`](examples) | Working plugin examples; [`CreateCar`](examples/CreateCar) is a practical starting point |
| [`shared`](shared) | Code shared by Plugin-SDK targets, including events and version handling |
| [`hooking`](hooking), [`injector`](injector), [`safetyhook`](safetyhook) | Low-level utilities used to call or hook game code |
| [`tools`](tools) | Project generators, installer support, templates, and validation scripts |

For normal GTA: San Andreas mod development, you will mostly consume headers from `plugin_sa/game_sa` through `#include <plugin.h>`. You do not need to understand the reverse-engineering repository or the generator tools first.

## Frequently asked questions

### Is this a fork of Plugin-SDK?

Yes. It is a Plugin-SDK fork focused on improving and extending GTA: San Andreas support. The familiar APIs, tools, examples, history, and original credits are preserved.

### Is this the full GTA: San Andreas source code?

No. The separate reverse-engineered project models the game's original code. This repository exposes useful parts of that knowledge through a mod-friendly SDK.

### Must my plugin use AI or `auto-re-agent`?

No. They were research tools used by the maintainers. Building a plugin from this SDK is ordinary C++ development.

### Can I replace upstream Plugin-SDK with this checkout?

The structure deliberately stays close to upstream, so the change should be familiar. Still, corrected layouts and signatures can expose assumptions in existing mods. Rebuild everything, read compiler errors carefully, and test the result in game.

### Why is the repository so large if it focuses on one game?

It retains the complete upstream tree so its history, build tooling, and compatibility are not needlessly broken. New work in this repository is focused on `plugin_sa` and its shared dependencies.

## Contributing corrections

Reports and pull requests are welcome, but reverse-engineering claims need reproducible evidence. Include the game version, address, expected declaration or behavior, and the relevant decompilation and assembly observations. Automated parity output or an LLM answer can identify a candidate; neither is proof on its own.

Please keep one logical correction per change and avoid unrelated formatting churn. Open an [issue](https://github.com/Dryxio/plugin-sdk-sa/issues) if you are unsure whether a finding is ready.

## Credits and license

This project builds on the work of DK22Pac and the many contributors to [Plugin-SDK](https://github.com/DK22Pac/plugin-sdk). GTA community researchers, mod authors, the MTA team, Sanny Builder contributors, and GTAForums members supplied much of the knowledge that made the original SDK possible.

The reverse-engineering workflow was developed around [`auto-re-agent`](https://github.com/Dryxio/auto-re-agent). See [LICENSE](LICENSE) for this repository's license.
