/* NON_MATCHING: 447 lines (shape 235), all register allocation and scheduling. `heading` is cleared per cell so that
 * no path reads it unset; retail leaves it unset (it keeps `vmov.f32 s16, s17` in every unturned case and needs one
 * VFP register less, d8-d11). Retail also numbers the set and index registers of the three flag loops the other way
 * round and loads the saved eye's x before its z. The piece cases stand in the order of retail's case bodies. */
#include "code/Code0029_Smt4a.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "gfx/ControllerModel.h"
#include "map/LmapViewGlobals.h"
#include "map/MapSceneAccess.h"
#include "map/mapRndMaze.h"
#include "Model/MoriModelContent.h"

extern "C" {

void FUN_0035d1e0(f32 x, f32 z, f32 heading);
f32 cameraGetHeadingDegrees(void);
s32 FUN_00355418(u32 index);

enum {
    MAZE_PIECE_SETS = 5,       /* model sets 0-4 hold the maze pieces; a piece code is `set << 4 | turn` */
    MAZE_MARKER_SET = 5,       /* set 5: the two marker models, then one model per special cell */
    SPAWN_INDEX_SCRIPTED = 100 /* spawn indices from here on take their markers from the scene's table entry */
};

/* Shows or hides the random maze's models. While a departure loads the map they are all hidden. Otherwise they are
 * shown, and when they had been hidden the maze is laid out again around the saved eye position: every marked cell
 * gets the next model of its piece set, the two marker models and the special-cell models are placed beside the
 * cell on the side its variant names, and the piece models left over are hidden. */
void mapRndMazeUpdateModelVisibility(void)
{
    MapSaveBlockA *saved = gameFlagsGetBlock();
    s32 special = 0;
    s32 set;
    s32 index;

    if (g_gameState.loading != 0) {
        for (set = 0; set < MAZE_MODEL_SET_COUNT; ++set) {
            for (index = 0; index < g_mapRndMaze.modelCounts[set]; ++index) {
                Obj557b18 *body = g_mapRndMaze.models[set][index]->body;
            body->flags |= 3;
            }
        }
        if (g_mapRndMaze.scriptedFirstMarkerA != NULL) {
            g_mapRndMaze.scriptedFirstMarkerA->body->flags |= 3;
        }
        if (g_mapRndMaze.scriptedSecondMarker != NULL) {
            g_mapRndMaze.scriptedSecondMarker->body->flags |= 3;
        }
        if (g_mapRndMaze.marker != NULL) {
            g_mapRndMaze.marker->body->flags |= 3;
        }
        if (g_mapRndMaze.scriptedFirstMarkerB != NULL) {
            g_mapRndMaze.scriptedFirstMarkerB->body->flags |= 3;
        }
        g_mapRndMaze.hidden = 1;
        return;
    }

    for (set = 0; set < MAZE_MODEL_SET_COUNT; ++set) {
        for (index = 0; index < g_mapRndMaze.modelCounts[set]; ++index) {
            Obj557b18 *body = g_mapRndMaze.models[set][index]->body;
            body->flags &= ~3;
        }
    }
    if (g_mapRndMaze.scriptedFirstMarkerA != NULL) {
        g_mapRndMaze.scriptedFirstMarkerA->body->flags &= ~3;
    }
    if (g_mapRndMaze.scriptedSecondMarker != NULL) {
        g_mapRndMaze.scriptedSecondMarker->body->flags &= ~3;
    }
    if (g_mapRndMaze.marker != NULL) {
        g_mapRndMaze.marker->body->flags &= ~3;
    }
    if (g_mapRndMaze.scriptedFirstMarkerB != NULL) {
        g_mapRndMaze.scriptedFirstMarkerB->body->flags &= ~3;
    }
    if (g_mapRndMaze.hidden == 0) {
        return;
    }

    FUN_0035d1e0(g_lmapView->savedEye.x, g_lmapView->savedEye.z, cameraGetHeadingDegrees());

    s32 used[MAZE_MODEL_SET_COUNT] = { 0, 0, 0, 0, 0, 0 };
    for (s32 row = 0; row < saved->maze.height; ++row) {
        for (s32 column = 0; column < saved->maze.width; ++column) {
            if (saved->grid.cells[row][column].marked != 1) {
                continue;
            }
            MoriModelContent *model = NULL;
            f32 heading = 0.0f;
            MapVector position;
            position.x = (f32)column * 700.0f + 350.0f;
            position.y = 0.0f;
            position.z = (f32)row * 700.0f + 350.0f;

            switch (saved->grid.cells[row][column].autoTile.neighbors) {
            case 0x00:
                model = g_mapRndMaze.models[0][used[0]++];
                heading = 0.0f;
                break;
            case 0x13:
                model = g_mapRndMaze.models[1][used[1]++];
                heading = 90.0f;
                break;
            case 0x11:
                model = g_mapRndMaze.models[1][used[1]++];
                heading = 270.0f;
                break;
            case 0x21:
                model = g_mapRndMaze.models[2][used[2]++];
                heading = 90.0f;
                break;
            case 0x10:
                model = g_mapRndMaze.models[1][used[1]++];
                heading = 0.0f;
                break;
            case 0x30:
                model = g_mapRndMaze.models[3][used[3]++];
                heading = 0.0f;
                break;
            case 0x31:
                model = g_mapRndMaze.models[3][used[3]++];
                heading = 270.0f;
                break;
            case 0x40:
                model = g_mapRndMaze.models[4][used[4]++];
                heading = 0.0f;
                break;
            case 0x12:
                model = g_mapRndMaze.models[1][used[1]++];
                heading = 180.0f;
                break;
            case 0x33:
                model = g_mapRndMaze.models[3][used[3]++];
                heading = 90.0f;
                break;
            case 0x32:
                model = g_mapRndMaze.models[3][used[3]++];
                heading = 180.0f;
                break;
            case 0x42:
                model = g_mapRndMaze.models[4][used[4]++];
                heading = 180.0f;
                break;
            case 0x20:
                model = g_mapRndMaze.models[2][used[2]++];
                heading = 0.0f;
                break;
            case 0x43:
                model = g_mapRndMaze.models[4][used[4]++];
                heading = 90.0f;
                break;
            case 0x41:
                model = g_mapRndMaze.models[4][used[4]++];
                heading = 270.0f;
                break;
            default:
                break;
            }
            if (model != NULL) {
                Obj557b18 *body = model->body;
                controllerSetDestination(body, &position);
                controllerSetRotationEulerDegrees(body, 0.0f, heading, 0.0f);
                body->flags &= ~3;
            }

            if (saved->grid.cells[row][column].markers.first == 1) {
                if (lmapGetSpawnIndex() >= SPAWN_INDEX_SCRIPTED) {
                    if (FUN_00355418((s32)saved->unk15C4) == 0) {
                        model = g_mapRndMaze.scriptedFirstMarkerA;
                    } else if (FUN_00355418((s32)saved->unk15C4) == 1) {
                        model = g_mapRndMaze.scriptedFirstMarkerB;
                    } else if (FUN_00355418((s32)saved->unk15C4) == 2) {
                        model = g_mapRndMaze.models[MAZE_MARKER_SET][0];
                    }
                } else {
                    model = g_mapRndMaze.models[MAZE_MARKER_SET][0];
                }
                if (model != NULL) {
                    switch (saved->grid.cells[row][column].autoTile.variant) {
                    case 1:
                        position.x -= 100.0f;
                        heading = 90.0f;
                        break;
                    case 2:
                        position.x += 100.0f;
                        heading = 270.0f;
                        break;
                    case 3:
                        position.z -= 100.0f;
                        heading = 0.0f;
                        break;
                    case 4:
                        position.z += 100.0f;
                        heading = 180.0f;
                        break;
                    }
                    Obj557b18 *body = model->body;
                    controllerSetDestination(body, &position);
                    controllerSetRotationEulerDegrees(body, 0.0f, heading, 0.0f);
                }
            }

            if (saved->grid.cells[row][column].markers.second == 1) {
                MoriModelContent *second;
                if (lmapGetSpawnIndex() >= SPAWN_INDEX_SCRIPTED && FUN_00297008((s32)saved->unk15C4) != 0) {
                    second = g_mapRndMaze.scriptedSecondMarker;
                } else {
                    second = g_mapRndMaze.models[MAZE_MARKER_SET][1];
                }
                if (second != NULL) {
                    switch (saved->grid.cells[row][column].autoTile.variant) {
                    case 1:
                        position.x -= 100.0f;
                        heading = 90.0f;
                        break;
                    case 2:
                        position.x += 100.0f;
                        heading = 270.0f;
                        break;
                    case 3:
                        position.z -= 100.0f;
                        heading = 0.0f;
                        break;
                    case 4:
                        position.z += 100.0f;
                        heading = 180.0f;
                        break;
                    }
                    Obj557b18 *body = second->body;
                    controllerSetDestination(body, &position);
                    controllerSetRotationEulerDegrees(body, 0.0f, heading, 0.0f);
                }
            }

            switch (saved->grid.cells[row][column].specialKind) {
            case 2: {
                MoriModelContent *marker = g_mapRndMaze.models[MAZE_MARKER_SET][2 + special];
                if (marker != NULL) {
                    Obj557b18 *body = marker->body;
                    heading = 90.0f;
                    controllerSetDestination(body, &position);
                    controllerSetRotationEulerDegrees(body, 0.0f, heading, 0.0f);
                }
                ++special;
                break;
            }
            case 1: {
                MoriModelContent *marker = g_mapRndMaze.models[MAZE_MARKER_SET][2 + special];
                if (marker != NULL) {
                    switch (saved->grid.cells[row][column].autoTile.variant) {
                    case 1:
                        heading = 90.0f;
                        break;
                    case 2:
                        heading = 270.0f;
                        break;
                    case 3:
                        heading = 0.0f;
                        break;
                    case 4:
                        heading = 180.0f;
                        break;
                    }
                    Obj557b18 *body = marker->body;
                    controllerSetDestination(body, &position);
                    controllerSetRotationEulerDegrees(body, 0.0f, heading, 0.0f);
                }
                ++special;
                break;
            }
            }
        }
    }

    /* the piece models no cell took */
    for (set = 0; set < MAZE_PIECE_SETS; ++set) {
        for (index = used[set]; index < g_mapRndMaze.modelCounts[set]; ++index) {
            Obj557b18 *body = g_mapRndMaze.models[set][index]->body;
            body->flags |= 1;
        }
    }
}

} /* extern "C" */
