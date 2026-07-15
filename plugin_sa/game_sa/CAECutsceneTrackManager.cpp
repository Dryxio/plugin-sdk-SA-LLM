/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CAECutsceneTrackManager.h"

CAECutsceneTrackManager& AECutsceneTrackManager = *(CAECutsceneTrackManager*)0x8AE554;

void CAECutsceneTrackManager::StopCutsceneTrack() {
    plugin::CallMethod<0x4DBE80, CAECutsceneTrackManager*>(this);
}

void CAECutsceneTrackManager::StartTrackPlayback() {
    plugin::CallMethod<0x4DBF10, CAECutsceneTrackManager*>(this);
}

void CAECutsceneTrackManager::Service(int time) {
    plugin::CallMethod<0x4DBFB0, CAECutsceneTrackManager*, int>(this, time);
}

void CAECutsceneTrackManager::PreloadBeatTrack(short trackId, bool wait) {
    plugin::CallMethod<0x4DC130, CAECutsceneTrackManager*, short, bool>(this, trackId, wait);
}

void CAECutsceneTrackManager::PlayPreloadedCutsceneTrack() {
    plugin::CallMethod<0x4DBE70, CAECutsceneTrackManager*>(this);
}

bool CAECutsceneTrackManager::IsCutsceneTrackActive() {
    return plugin::CallMethodAndReturn<bool, 0x4DBEB0, CAECutsceneTrackManager*>(this);
}

char CAECutsceneTrackManager::GetCutsceneTrackStatus() {
    return plugin::CallMethodAndReturn<char, 0x4DBEC0, CAECutsceneTrackManager*>(this);
}
