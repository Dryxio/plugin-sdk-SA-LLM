/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CEventHandler::ComputePedCollisionWithPedResponse)
    static int address;
    static int global_address;
    static const int id = 0x4BDB80;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BDB80, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (1), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4C3902, GAME_10US_COMPACT, H_CALL, 0x4C3870, 1,
        0x4C3902, GAME_10US_HOODLUM, H_CALL, 0x4C3870, 1>;
    using def_t = void(CEventHandler *, CEvent *, CTask *, CTask *);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEventHandler *, CEvent *, CTask *, CTask *>, 0, 1, 2, 3>;
META_END

META_BEGIN(CEventHandler::ComputePedCollisionWithPlayerResponse)
    static int address;
    static int global_address;
    static const int id = 0x4BE7D0;
    static const bool is_virtual = false;
    static const int vtable_index = -1;
    using mv_addresses_t = MvAddresses<0x4BE7D0, 0, 0, 0, 0, 0>;
    // total references count: 10us (1), 10ushl (1), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
    using refs_t = RefList<
        0x4C3911, GAME_10US_COMPACT, H_CALL, 0x4C3870, 1,
        0x4C3911, GAME_10US_HOODLUM, H_CALL, 0x4C3870, 1>;
    using def_t = void(CEventHandler *, CEvent *, CTask *, CTask *);
    static const int cb_priority = PRIORITY_BEFORE;
    using calling_convention_t = CallingConventions::Thiscall;
    using args_t = ArgPick<ArgTypes<CEventHandler *, CEvent *, CTask *, CTask *>, 0, 1, 2, 3>;
META_END

}
