/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CAECutsceneTrackManager {
public:
    bool m_bPlayRequest;
    bool m_bPaused;
    unsigned char gap2[2];
    int m_nAudioChannel;
    unsigned long m_nStatus;
    unsigned int m_nTrackId;
    int field_10;
    unsigned int field_14;
    int field_18;
    signed char m_bIsUserTrack;
    unsigned char gap1D[7];
    unsigned int m_nPlayingTrackId;
    int m_nTrackPlayTime;
    int m_nTrackLengthMs;

public:
    void StopCutsceneTrack();
    void StartTrackPlayback();
    void Service(int time);
    void PreloadBeatTrack(short trackId, bool wait);
    void PlayPreloadedCutsceneTrack();
    bool IsCutsceneTrackActive();
    char GetCutsceneTrackStatus();
};
VALIDATE_OFFSET(CAECutsceneTrackManager, m_bPlayRequest, 0x0);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_bPaused, 0x1);
VALIDATE_OFFSET(CAECutsceneTrackManager, gap2, 0x2);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_nAudioChannel, 0x4);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_nStatus, 0x8);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_nTrackId, 0xC);
VALIDATE_OFFSET(CAECutsceneTrackManager, field_10, 0x10);
VALIDATE_OFFSET(CAECutsceneTrackManager, field_14, 0x14);
VALIDATE_OFFSET(CAECutsceneTrackManager, field_18, 0x18);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_bIsUserTrack, 0x1C);
VALIDATE_OFFSET(CAECutsceneTrackManager, gap1D, 0x1D);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_nPlayingTrackId, 0x24);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_nTrackPlayTime, 0x28);
VALIDATE_OFFSET(CAECutsceneTrackManager, m_nTrackLengthMs, 0x2C);
VALIDATE_SIZE(CAECutsceneTrackManager, 0x30);

extern CAECutsceneTrackManager& AECutsceneTrackManager;
