#ifndef GFX_CAMERAMATRIXCACHE_H
#define GFX_CAMERAMATRIXCACHE_H
#include "shard/W5_W5Match2_PlainData.h"
#include <stddef.h>
#include "classes/FloatState.h"
struct Matrix34Data { f32 values[12]; };
struct CameraMatrixCache {
    CameraMatrixCache() {}
    ~CameraMatrixCache();

    /* 0x000 */ u8 enabled;
    /* 0x001 */ u8 unk001[0x1D7];
    /* 0x1D8 */ Matrix34Data view;
    /* 0x208 */ Matrix44 viewExpanded;
    /* 0x248 */ Matrix44 projection;
    /* 0x288 */ Matrix34Data secondaryView;
    /* 0x2B8 */ Matrix44 secondaryExpanded;
    /* 0x2F8 */ Matrix44 secondaryProjection;
    /* 0x338 */ Matrix34Data viewNormals;
    /* 0x368 */ Matrix44 viewTransposed;
    /* 0x3A8 */ Matrix44 projectionTransposed;
    /* 0x3E8 */ Matrix34Data secondaryNormals;
    /* 0x418 */ Matrix44 secondaryTransposed;
    /* 0x458 */ Matrix44 secondaryProjectionTransposed;
    /* 0x498 */ u8 unk498[8];
    /* 0x4A0 */ FloatState parameters;
    /* 0x500 */ f32 stereoOffset;
    /* 0x504 */ f32 stereoScale;
};
typedef char CameraMatrixCacheOffsets[(offsetof(CameraMatrixCache, projection) == 0x248 && offsetof(CameraMatrixCache, parameters) == 0x4A0) ? 1 : -1];
typedef char CameraMatrixCacheStereoOffsets[(offsetof(CameraMatrixCache, stereoOffset) == 0x500 && offsetof(CameraMatrixCache, stereoScale) == 0x504) ? 1 : -1];

/* The active camera also owns the stereo-builder distance beyond the matrix cache. */
struct CameraMatrixStereoCache : CameraMatrixCache {
    /* 0x508 */ f32 stereoParameter;
};
typedef char CameraMatrixStereoCacheLayoutCheck[
    sizeof(CameraMatrixCache) == 0x508 &&
    offsetof(CameraMatrixStereoCache, stereoParameter) == 0x508 &&
    sizeof(CameraMatrixStereoCache) == 0x50C ? 1 : -1];
#endif
