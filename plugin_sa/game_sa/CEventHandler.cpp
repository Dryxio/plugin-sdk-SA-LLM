/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventHandler.h"

PLUGIN_SOURCE_FILE

int addrof(CEventHandler::ComputePedCollisionWithPedResponse) = ADDRESS_BY_VERSION(0x4BDB80, 0, 0, 0, 0, 0);
int gaddrof(CEventHandler::ComputePedCollisionWithPedResponse) = GLOBAL_ADDRESS_BY_VERSION(0x4BDB80, 0, 0, 0, 0, 0);

void CEventHandler::ComputePedCollisionWithPedResponse(CEvent *event, CTask *activeTask, CTask *simplestTask) {
    plugin::CallMethodDynGlobal<CEventHandler *, CEvent *, CTask *, CTask *>(
        gaddrof(CEventHandler::ComputePedCollisionWithPedResponse),
        this,
        event,
        activeTask,
        simplestTask
    );
}

int addrof(CEventHandler::ComputePedCollisionWithPlayerResponse) = ADDRESS_BY_VERSION(0x4BE7D0, 0, 0, 0, 0, 0);
int gaddrof(CEventHandler::ComputePedCollisionWithPlayerResponse) = GLOBAL_ADDRESS_BY_VERSION(0x4BE7D0, 0, 0, 0, 0, 0);

void CEventHandler::ComputePedCollisionWithPlayerResponse(CEvent *event, CTask *activeTask, CTask *simplestTask) {
    plugin::CallMethodDynGlobal<CEventHandler *, CEvent *, CTask *, CTask *>(
        gaddrof(CEventHandler::ComputePedCollisionWithPlayerResponse),
        this,
        event,
        activeTask,
        simplestTask
    );
}
