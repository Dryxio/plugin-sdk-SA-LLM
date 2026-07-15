/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"

class CTaskComplexSequence : public CTaskComplex {
protected:
    CTaskComplexSequence(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    int m_nCurrentTaskIndex;
    CTask *m_apTasks[8];
    unsigned int m_nRepeatMode;
    int m_nRepeatedCount;
    bool m_bFlushTasks;
    unsigned char gap39[3];
    unsigned int m_nReferenceCount;

    CTaskComplexSequence();
    ~CTaskComplexSequence();
    bool AddTask(CTask *pTask);
};
VALIDATE_OFFSET(CTaskComplexSequence, m_nCurrentTaskIndex, 0xC);
VALIDATE_OFFSET(CTaskComplexSequence, m_apTasks, 0x10);
VALIDATE_OFFSET(CTaskComplexSequence, m_nRepeatMode, 0x30);
VALIDATE_OFFSET(CTaskComplexSequence, m_nRepeatedCount, 0x34);
VALIDATE_OFFSET(CTaskComplexSequence, m_bFlushTasks, 0x38);
VALIDATE_OFFSET(CTaskComplexSequence, gap39, 0x39);
VALIDATE_OFFSET(CTaskComplexSequence, m_nReferenceCount, 0x3C);
VALIDATE_SIZE(CTaskComplexSequence, 0x40);
