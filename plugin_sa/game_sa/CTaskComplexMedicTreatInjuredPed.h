/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CTaskComplex.h"
#include "CVector.h"

class CAccident;

class PLUGIN_API CTaskComplexMedicTreatInjuredPed : public CTaskComplex {
protected:
	CTaskComplexMedicTreatInjuredPed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
	CVehicle *m_pVehicle;
	CPed *m_pPartnerMedic;
	bool m_bIsDriver;
	unsigned char gap15[3];
	CAccident *m_pAccident;
	CVector m_vecAccidentPosition;
	bool m_bLeftCarOnce;
	unsigned char gap29[3];

	CTaskComplexMedicTreatInjuredPed(CVehicle *vehicle, CPed *partnerMedic, bool isDriver);

};
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, m_pVehicle, 0xC);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, m_pPartnerMedic, 0x10);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, m_bIsDriver, 0x14);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, gap15, 0x15);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, m_pAccident, 0x18);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, m_vecAccidentPosition, 0x1C);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, m_bLeftCarOnce, 0x28);
VALIDATE_OFFSET(CTaskComplexMedicTreatInjuredPed, gap29, 0x29);
VALIDATE_SIZE(CTaskComplexMedicTreatInjuredPed, 0x2C);
