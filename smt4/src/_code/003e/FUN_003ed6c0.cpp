/* NON_MATCHING: retail initialises the three camera vectors through a walking pointer (offset vstr x3, then up as vstmia {0,1}+vstr with 1.0 reloaded into s1); the build keeps fixed offsets and loads 1.0 into s3 up front. */
#include "classes/SceneCameraElement.h"

/* The camera module's state word pair and the flag/counter words that follow it. */
struct AsdCameraModuleState {
    explicit AsdCameraModuleState(s64 initialState) : state(initialState) {}
    /* 0x00 */ u32 work;
    /* 0x04 */ u32 table;
    /* 0x08 */ s64 state;
};
struct AsdCameraModuleCounters {
    AsdCameraModuleCounters(u32 first, u32 second) : first(first), second(second) {}
    u32 first;
    u32 second;
};
typedef char AsdCameraModuleStateSizeCheck[sizeof(AsdCameraModuleState) == 0x10 ? 1 : -1];
typedef char AsdCameraModuleCountersSizeCheck[sizeof(AsdCameraModuleCounters) == 8 ? 1 : -1];

/* The default scene camera: position, look-at offset and up vector. */
struct SceneCameraDefaults {
    SceneCameraDefaults()
    {
        position[0] = 0.0f;
        position[1] = 100.0f;
        position[2] = 1280.0f;
        offset[0] = 0.0f;
        offset[1] = 0.0f;
        offset[2] = 0.0f;
        up[0] = 0.0f;
        up[1] = 1.0f;
        up[2] = 0.0f;
    }
    f32 position[3];
    f32 offset[3];
    f32 up[3];
};
typedef char SceneCameraDefaultsSizeCheck[sizeof(SceneCameraDefaults) == 0x24 ? 1 : -1];

AsdCameraModuleState g_asdCamera(-1);
AsdCameraModuleCounters g_asdCameraModuleCounters(0, 0);
SceneCameraDefaults g_sceneCameraDefaults;
SceneCameraElementPair g_sceneCameraElements;
