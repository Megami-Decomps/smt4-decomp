#include "gfx/CameraMatrixCache.h"

struct CameraPairModuleState {
    explicit CameraPairModuleState(s64 initialState) : state(initialState) {}
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 count;
    /* 0x08 */ s64 state;
};
struct CameraPairModuleCounters {
    CameraPairModuleCounters(u32 first, u32 second) : first(first), second(second) {}
    u32 first;
    u32 second;
};
typedef char CameraPairModuleStateSizeCheck[sizeof(CameraPairModuleState) == 0x10 ? 1 : -1];
typedef char CameraPairModuleCountersSizeCheck[sizeof(CameraPairModuleCounters) == 8 ? 1 : -1];

CameraPairModuleState g_cameraModuleState(-1);
CameraPairModuleCounters g_cameraModuleCounters(0, 0);
CameraMatrixCache g_cameraState1;
CameraMatrixCache g_cameraState2;
