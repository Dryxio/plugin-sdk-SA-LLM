/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CTask.h"


class PLUGIN_API CPedTaskPair {
public:
    CPed *m_pPed;
    CTask *m_pTask;
    union {
        int m_nTaskSlot;
        int field_8; // legacy plugin-sdk name
    };
    int m_nMatchId;
    bool m_bUsedTask;
    unsigned char gap11[3];

    SUPPORTED_10US void Flush();
};
VALIDATE_OFFSET(CPedTaskPair, m_pPed, 0x0);
VALIDATE_OFFSET(CPedTaskPair, m_pTask, 0x4);
VALIDATE_OFFSET(CPedTaskPair, m_nTaskSlot, 0x8);
VALIDATE_OFFSET(CPedTaskPair, field_8, 0x8);
VALIDATE_OFFSET(CPedTaskPair, m_nMatchId, 0xC);
VALIDATE_OFFSET(CPedTaskPair, m_bUsedTask, 0x10);
VALIDATE_OFFSET(CPedTaskPair, gap11, 0x11);
VALIDATE_SIZE(CPedTaskPair, 0x14);

#include "meta/meta.CPedTaskPair.h"
