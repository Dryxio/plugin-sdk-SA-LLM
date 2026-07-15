/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAEPedSpeechAudioEntity.h"

class PLUGIN_API CAEPedlessSpeechAudioEntity : public CAEPedSpeechAudioEntity {
public:
    char field_100[20];
    CEntity *m_pAttachedEntity;
};
VALIDATE_OFFSET(CAEPedlessSpeechAudioEntity, field_100, 0x100);
VALIDATE_OFFSET(CAEPedlessSpeechAudioEntity, m_pAttachedEntity, 0x114);
VALIDATE_SIZE(CAEPedlessSpeechAudioEntity, 0x118);
