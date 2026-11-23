/* NON_MATCHING: 414 shape lines. Retail lays the frame out the other way round (the swept eye at sp, the level
 * focus at sp+68, 84 bytes against 76), picks the player's position through one conditional pointer, folds the
 * two x limits of the open room into a single range compare and schedules the vector arithmetic differently. */
#include <math.h>
#include "map/lmapMain.h"
#include "map/MapCameraWork.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "script/scrScriptProcess.h"
#include "gfx/CameraPerspective.h"
#include "gfx/CameraStereoDepth.h"
#include "util/TrigF32.h"

struct AsdCamera;

extern "C" {

extern AsdCamera g_fixedCamera;

f32 __hardfp_atan2f(f32 y, f32 x);
s32 mapCollisionSweepSegment(const MapVector *from, const MapVector *to, MapVector *out);
void stereoCameraSetPerspective(AsdCamera *view, u32 pivot, CameraPerspective perspective);
void cameraMatrixCacheSetLookAt(AsdCamera *camera, const MapVector *eye, const MapVector *target, const MapVector *up);
void vec3DirectionBetween(MapVector *out, MapVector from, MapVector to);
void residentApplyFallbackValues(MapVector position, f32 angle);

#define FOLLOW_DEGREES_TO_RADIANS 0.017453292f
#define FOLLOW_RADIANS_TO_DEGREES 57.29578f
#define FOLLOW_FOCUS_HEIGHT_MAX 1200.0f
#define FOLLOW_EYE_HEIGHT_MAX 2800.0f
#define FOLLOW_PULL_BACK_STEP 10.0f      /* what the pull-back speed gains per frame ... */
#define FOLLOW_PULL_BACK_SPEED_MAX 100.0f /* ... and its limit */
#define FOLLOW_LISTENER_SCALE (1.0f / 3.0f)

enum {
    FOLLOW_OPEN_ROOM_MAP = 101, /* the map whose room below lets the camera pass through its walls */
    LMAP_MAIN_STATE_3 = 3,
    LMAP_MAIN_STATE_4 = 4,
    LMAP_MAIN_STATE_5 = 5,
    LMAP_MAIN_STATE_6 = 6,
    LMAP_MAIN_STATE_MOVE_TARGET = 7 /* the camera follows the position the player is moved to */
};

/* Steps the field map's follow camera: places the focus above the player and the eye behind it at the preset's
 * distance, pulls the eye in front of whatever the map's collision puts between them (letting it back out
 * gradually), eases the applied eye and target toward the result and applies them to the fixed camera, the
 * map view and the sound listener. */
void lmapMainUpdateFollowCamera(LmapMainState *main)
{
    MapVector eye;
    MapVector direction;
    MapVector focus;
    MapVector listener;
    CameraPerspective perspective;
    LmapScene *scene = g_lmapScene;
    LmapView *view;
    MapVector position;
    f32 distance;
    f32 towardX;
    f32 towardY;
    f32 towardZ;

    if (main->state == LMAP_MAIN_STATE_MOVE_TARGET) {
        position = scene->pose.targetPosition;
    } else {
        position = scene->pose.position;
    }
    main->cameraFocus.x = position.x;
    main->cameraFocus.z = position.z;
    main->cameraFrom.x = position.x - libm_sinf(main->angle * FOLLOW_DEGREES_TO_RADIANS) * g_mapCamera->rearDistance[g_mapCamera->preset];
    main->cameraFrom.z = position.z - libm_cosf(main->angle * FOLLOW_DEGREES_TO_RADIANS) * g_mapCamera->rearDistance[g_mapCamera->preset];
    main->cameraFocus.y = position.y + g_mapCamera->targetHeight[g_mapCamera->preset];
    main->cameraFrom.y = position.y + g_mapCamera->eyeHeight[g_mapCamera->preset];
    if (main->external != 0) {
        main->cameraFocus.y += main->cameraFocusLift;
    }
    if (main->cameraFocus.y > FOLLOW_FOCUS_HEIGHT_MAX) {
        main->cameraFocus.y = FOLLOW_FOCUS_HEIGHT_MAX;
    }
    if (main->cameraFrom.y > FOLLOW_EYE_HEIGHT_MAX) {
        main->cameraFrom.y = FOLLOW_EYE_HEIGHT_MAX;
    }

    /* The eye is pulled in along the level line from the focus. */
    focus = main->cameraFocus;
    focus.y = main->cameraFrom.y;
    if (main->external != 0 ||
        (!(main->mapId == FOLLOW_OPEN_ROOM_MAP && position.x < -10700.0f && position.x > -11700.0f && position.z > -11000.0f && position.z < -9900.0f) &&
         !(main->state == LMAP_MAIN_STATE_4 || main->state == LMAP_MAIN_STATE_5 || main->state == LMAP_MAIN_STATE_6))) {
        mapCollisionSweepSegment(&main->cameraFrom, &focus, &eye);
        distance = (eye.x - focus.x) * (eye.x - focus.x) + (eye.y - focus.y) * (eye.y - focus.y) +
            (eye.z - focus.z) * (eye.z - focus.z);
    } else {
        eye = main->cameraFrom;
        distance = (eye.x - focus.x) * (eye.x - focus.x) + (eye.y - focus.y) * (eye.y - focus.y) +
            (eye.z - focus.z) * (eye.z - focus.z);
    }
    distance = sqrtf(distance);
    if (distance > 0.0001f) {
        f32 scale = 1.0f / distance;

        towardX = (focus.x - eye.x) * scale;
        towardY = (focus.y - eye.y) * scale;
        towardZ = (focus.z - eye.z) * scale;
    } else {
        towardX = 0.0f;
        towardY = 0.0f;
        towardZ = 0.1f;
    }

    view = g_mapCamera;
    if (main->angleReset != 0) {
        view->clipDistance = distance;
        view->timer = 0.0f;
    } else if (view->clipDistance < distance) {
        view->timer += FOLLOW_PULL_BACK_STEP;
        if (view->timer > FOLLOW_PULL_BACK_SPEED_MAX) {
            view->timer = FOLLOW_PULL_BACK_SPEED_MAX;
        }
        view->clipDistance += view->timer;
        if (view->clipDistance > distance) {
            view->clipDistance = distance;
        }
    } else {
        view->clipDistance = distance;
        view->timer = 0.0f;
    }
    eye.x = focus.x - towardX * g_mapCamera->clipDistance;
    eye.y = focus.y - towardY * g_mapCamera->clipDistance;
    eye.z = focus.z - towardZ * g_mapCamera->clipDistance;

    if (main->angleReset != 0) {
        main->cameraTarget = main->cameraFocus;
        main->angleReset = 0;
        main->cameraEye = eye;
    } else if (main->state != LMAP_MAIN_STATE_3 &&
        !(main->state == LMAP_MAIN_STATE_4 || main->state == LMAP_MAIN_STATE_5 || main->state == LMAP_MAIN_STATE_6)) {
        main->cameraTarget.x += main->cameraFocus.x - main->cameraTarget.x;
        main->cameraTarget.y += main->cameraFocus.y - main->cameraTarget.y;
        main->cameraTarget.z += main->cameraFocus.z - main->cameraTarget.z;
        main->cameraEye.x += eye.x - main->cameraEye.x;
        main->cameraEye.y += (eye.y - main->cameraEye.y) * 0.5f;
        main->cameraEye.z += eye.z - main->cameraEye.z;
    } else {
        main->cameraEye.x += (eye.x - main->cameraEye.x) * (1.0f / 3.0f);
        main->cameraTarget.x += (main->cameraFocus.x - main->cameraTarget.x) * (1.0f / 3.0f);
        main->cameraTarget.y += (main->cameraFocus.y - main->cameraTarget.y) * (1.0f / 3.0f);
        main->cameraTarget.z += (main->cameraFocus.z - main->cameraTarget.z) * (1.0f / 3.0f);
        main->cameraEye.y += (eye.y - main->cameraEye.y) * (1.0f / 3.0f);
        main->cameraEye.z += (eye.z - main->cameraEye.z) * (1.0f / 3.0f);
    }

    FUN_00298d50(reinterpret_cast<u32>(&g_fixedCamera));
    asdCameraSetStereoDepth(&g_fixedCamera, 1000.0f, 1.0f);
    perspective.fovy = g_mapCamera->fieldOfView[g_mapCamera->preset];
    perspective.nearZ = 20.0f;
    perspective.farZ = 2560000.0f;
    perspective.aspect = 400.0f / 240.0f;
    stereoCameraSetPerspective(&g_fixedCamera, 1, perspective);
    cameraMatrixCacheSetLookAt(&g_fixedCamera, &main->cameraEye, &main->cameraTarget, &main->cameraUp);

    view = g_mapCamera;
    view->savedTarget = main->cameraTarget;
    view->savedEye = main->cameraEye;
    view->heading = main->angle;
    vec3DirectionBetween(&direction, view->savedTarget, view->savedEye);
    g_mapCamera->weight = direction.y;
    listener.x = position.x * FOLLOW_LISTENER_SCALE;
    listener.y = position.y * FOLLOW_LISTENER_SCALE;
    listener.z = position.z * FOLLOW_LISTENER_SCALE;
    residentApplyFallbackValues(listener,
        __hardfp_atan2f(g_mapCamera->savedEye.x - g_mapCamera->savedTarget.x,
            g_mapCamera->savedEye.z - g_mapCamera->savedTarget.z) * FOLLOW_RADIANS_TO_DEGREES);
}

} /* extern "C" */
