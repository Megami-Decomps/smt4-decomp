#include <stdio.h>
#include "common.h"
#include "map/mapDepart.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b58.h"
#include "code/Code001c.h"
#include "camp/CampMenuEntry.h"

extern "C" {

extern MapDepartWorkA *g_mapDepartWork;

/* Steps the loading of the map's background models: the sky model (when the map has one), then the map
 * model and its texture model. Returns 1 once everything is loaded (or nothing is to be loaded). */
s32 mapBgLoadStep(void)
{
    char name[0x80];

    switch (g_mapDepartWork->state) {
    case 0:
        return 1;
    case 1:
        break;
    case 2:
        if (g_mapDepartWork->skyId <= 0) {
            g_mapDepartWork->state = 10;
            break;
        }
        {
            MoriModelContent *sky = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
                "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapBg.cpp", 0x4C7);
            if (sky != NULL) {
                sky = modelListInit(sky);
            }
            g_mapDepartWork->skyModel = sky;
        }
        sprintf(name, "map/sky/sky_%02d.bam", g_mapDepartWork->skyId);
        modelLoadFileAsyncByName(g_mapDepartWork->skyModel, name);
        g_mapDepartWork->state++;
        break;
    case 3:
        if (moriModelContentIsLoaded(g_mapDepartWork->skyModel)) {
            g_mapDepartWork->state = 10;
        }
        break;
    case 10: {
        MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapBg.cpp", 0x4FE);
        if (model != NULL) {
            model = modelListInit(model);
        }
        g_mapDepartWork->mapModel = model;
        sprintf(name, "map/m%03d/m%03d_%02d.bam", g_mapDepartWork->area, g_mapDepartWork->area,
                g_mapDepartWork->map);
        /* With flag 0x9D set, area 39's maps 1-5 use the files of maps 15-19; areas 44-47 use area 43's. */
        s32 alternate = gameFlagIsSet(0x9D);
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 1) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 39, 39, 15);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 2) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 39, 39, 16);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 3) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 39, 39, 17);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 4) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 39, 39, 18);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 5) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 39, 39, 19);
        }
        if (g_mapDepartWork->area == 44 || g_mapDepartWork->area == 47) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 43, 43, 2);
        }
        if (g_mapDepartWork->area == 45 || g_mapDepartWork->area == 46) {
            sprintf(name, "map/m%03d/m%03d_%02d.bam", 43, 43, 1);
        }
        modelLoadFileAsyncByName(g_mapDepartWork->mapModel, name);

        MoriModelContent *texture = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapBg.cpp", 0x528);
        if (texture != NULL) {
            texture = modelListInit(texture);
        }
        g_mapDepartWork->mapTextureModel = texture;
        sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", g_mapDepartWork->area, g_mapDepartWork->area,
                g_mapDepartWork->map);
        alternate = gameFlagIsSet(0x9D);
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 1) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 39, 39, 15);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 2) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 39, 39, 16);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 3) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 39, 39, 17);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 4) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 39, 39, 18);
        }
        if (alternate && g_mapDepartWork->area == 39 && g_mapDepartWork->map == 5) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 39, 39, 19);
        }
        if (g_mapDepartWork->area == 44 || g_mapDepartWork->area == 47) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 43, 43, 2);
        }
        if (g_mapDepartWork->area == 45 || g_mapDepartWork->area == 46) {
            sprintf(name, "map/m%03d/m%03d_%02d_Tex.bch", 43, 43, 1);
        }
        modelLoadFileAsyncByName(g_mapDepartWork->mapTextureModel, name);
        moriModelContentSetRequestFirst(g_mapDepartWork->mapTextureModel, 0x10000);
        moriModelContentSetRequestSecond(g_mapDepartWork->mapTextureModel, 0x20000);
        g_mapDepartWork->state++;
        break;
    }
    case 11:
        if (moriModelContentIsLoaded(g_mapDepartWork->mapModel) &&
            moriModelContentIsLoaded(g_mapDepartWork->mapTextureModel)) {
            g_mapDepartWork->state = 99;
        }
        break;
    case 99:
        return 1;
    }
    return 0;
}

} /* extern "C" */
