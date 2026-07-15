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

class CFire;

class PLUGIN_API CTaskComplexDriveFireTruck : public CTaskComplex {
protected:
	CTaskComplexDriveFireTruck(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
	CVehicle *m_pVehicle;
	bool m_bIsDriver;
	unsigned char gap11[3];
	CPed *m_pPartnerFireman;
	CFire *m_pFire;

	CTaskComplexDriveFireTruck(CVehicle *vehicle, CPed *partnerFireman, bool isDriver);

};
VALIDATE_OFFSET(CTaskComplexDriveFireTruck, m_pVehicle, 0xC);
VALIDATE_OFFSET(CTaskComplexDriveFireTruck, m_bIsDriver, 0x10);
VALIDATE_OFFSET(CTaskComplexDriveFireTruck, gap11, 0x11);
VALIDATE_OFFSET(CTaskComplexDriveFireTruck, m_pPartnerFireman, 0x14);
VALIDATE_OFFSET(CTaskComplexDriveFireTruck, m_pFire, 0x18);
VALIDATE_SIZE(CTaskComplexDriveFireTruck, 0x1C);
