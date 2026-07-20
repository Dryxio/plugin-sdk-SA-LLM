/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CTaskTimer.h"

enum eFacialExpression
{
    FACIAL_EXPRESSION_NONE = -1,
    FACIAL_EXPRESSION_SURPRISE_PANIC = 0,
    FACIAL_EXPRESSION_SURPRISE_MILD = 1,
    FACIAL_EXPRESSION_CURIOSITY = 2,
    FACIAL_EXPRESSION_ANGER = 3,
    FACIAL_EXPRESSION_HAPPINESS = 4,
    FACIAL_EXPRESSION_SADNESS = 5,
    FACIAL_EXPRESSION_MAX_NUM_EMOTIONS = 6,
    FACIAL_EXPRESSION_TALKING = 7,
    FACIAL_EXPRESSION_CHEWING = 8,

    ANIM_FACSURP = FACIAL_EXPRESSION_SURPRISE_PANIC, // legacy plugin-sdk name
    ANIM_FACSURPM = FACIAL_EXPRESSION_SURPRISE_MILD, // legacy plugin-sdk name
    ANIM_FACURIOS = FACIAL_EXPRESSION_CURIOSITY, // legacy plugin-sdk name
    ANIM_FACANGER = FACIAL_EXPRESSION_ANGER, // legacy plugin-sdk name
    ANIM_FACTALK = FACIAL_EXPRESSION_TALKING, // legacy plugin-sdk name
    ANIM_FACGUM = FACIAL_EXPRESSION_CHEWING, // legacy plugin-sdk name
};

class PLUGIN_API CTaskSimpleFacial : public CTaskSimple {
protected:
    CTaskSimpleFacial(plugin::dummy_func_t a) : CTaskSimple(a), m_Timer(a) {}
public:
    CTaskTimer m_Timer;
    eFacialExpression m_nFacialExpression;
    int m_nDuration;

    CTaskSimpleFacial(eFacialExpression nFacialExpress,int nDuration);
};
VALIDATE_OFFSET(CTaskSimpleFacial, m_Timer, 0x8);
VALIDATE_OFFSET(CTaskSimpleFacial, m_nFacialExpression, 0x14);
VALIDATE_OFFSET(CTaskSimpleFacial, m_nDuration, 0x18);
VALIDATE_SIZE(CTaskSimpleFacial, 0x1C);
