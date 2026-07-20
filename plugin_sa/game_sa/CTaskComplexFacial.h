/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskSimpleFacial.h"

class PLUGIN_API CTaskComplexFacial : public CTaskComplex {
protected:
    CTaskComplexFacial(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    union {
        bool m_bIsChewing;
        bool m_bNotPlayer; // legacy plugin-sdk name
    };
    union {
        bool m_bTalkingLastFrame;
        bool m_bStarted; // legacy plugin-sdk name
    };
    bool m_bIsAborting;
    union {
        eFacialExpression m_nRequestA;
        eFacialExpression m_nFacialExpression1; // legacy plugin-sdk name
    };
    union {
        int m_nDurationA;
        int m_nDuration1; // legacy plugin-sdk name
    };
    union {
        eFacialExpression m_nRequestB;
        eFacialExpression m_nFacialExpression2; // legacy plugin-sdk name
    };
    union {
        int m_nDurationB;
        int m_nDuration2; // legacy plugin-sdk name
    };

    CTaskComplexFacial();
};
VALIDATE_OFFSET(CTaskComplexFacial, m_bIsChewing, 0xC);
VALIDATE_OFFSET(CTaskComplexFacial, m_bNotPlayer, 0xC);
VALIDATE_OFFSET(CTaskComplexFacial, m_bTalkingLastFrame, 0xD);
VALIDATE_OFFSET(CTaskComplexFacial, m_bStarted, 0xD);
VALIDATE_OFFSET(CTaskComplexFacial, m_bIsAborting, 0xE);
VALIDATE_OFFSET(CTaskComplexFacial, m_nRequestA, 0x10);
VALIDATE_OFFSET(CTaskComplexFacial, m_nFacialExpression1, 0x10);
VALIDATE_OFFSET(CTaskComplexFacial, m_nDurationA, 0x14);
VALIDATE_OFFSET(CTaskComplexFacial, m_nDuration1, 0x14);
VALIDATE_OFFSET(CTaskComplexFacial, m_nRequestB, 0x18);
VALIDATE_OFFSET(CTaskComplexFacial, m_nFacialExpression2, 0x18);
VALIDATE_OFFSET(CTaskComplexFacial, m_nDurationB, 0x1C);
VALIDATE_OFFSET(CTaskComplexFacial, m_nDuration2, 0x1C);
VALIDATE_SIZE(CTaskComplexFacial, 0x20);
