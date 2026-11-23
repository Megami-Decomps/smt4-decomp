/* NON_MATCHING: the calls, tests, constants, strings and data accesses are retail's (258 lines by shape). What
 * differs: retail unrolls the presence scan (the first entry, then four pairs) and addresses it and the
 * location-0 scan from one hoisted base (scene + 0xA6C in r8), so it needs no r9 and a 136-byte frame (the
 * build keeps the scan as a loop, saves r9 and uses 140 bytes); it reloads game flag 0x4d6's number from the
 * pool where the build keeps it in fp; and a few scratch registers in the table scan. */
#include <stdlib.h>
#include "classes/Obj5333c0.h"
#include "classes/Obj557b18.h"
#include "runtime/Stdio.h"
#include "camp/CampMenuEntry.h"

enum {
    SCENE_LOCATION_PLAIN = 0,          /* Obj5333c0::location */
    SCENE_LOCATION_HUNTER_COMPANY = 1,
    SCENE_KIND_NO_SEVENTH = 14,        /* Obj5333c0::kind: the seventh NPC is placed by game flag 0x491 */
    SCENE_NPC_SLOTS = 9,
    GAME_FLAG_ABSENT_NPCS = 0x4d6,     /* NPCs without a talk entry are shown standing by */
    GAME_FLAG_SEVENTH_NPC = 0x491
};

/* Which of the hunter company's three alternating NPCs have a talk entry. */
struct SceneNpcPresence {
    s8 seventh;
    s8 eighth;
    s8 ninth;
};

extern "C" {

s32 FUN_003f86c0(const u8 *table27);
s32 dataTable28IsLoaded(const u8 *table27);
s32 dataTable27Count(const u8 *table27);
s32 randBetween(s32 minimum, s32 maximum);
s32 recordCompareSecondWord(const u32 *left, const u32 *right);
void resourceObjectSetNamedFlag(Obj557b18 *object, const char *name, s32 enabled);

/* Makes a model visible when it is hidden. */
static __inline void showModel(Obj557b18 *model)
{
    if ((model->flags & 1) == 0) {
        model->flags |= 1;
    }
}

/* Builds the scene's talk entries from data table 0x27 (the rows of this scene kind whose flags allow them,
 * one per NPC, sorted by NPC number), then sets up the NPC models for them and moves to state 2. */
void questCenterBuildTalkEntries(Obj5333c0 *scene)
{
    s32 i;
    s32 j;

    if (!FUN_003f86c0(&scene->talkTable)) {
        return;
    }
    if (!dataTable28IsLoaded(&scene->talkTable)) {
        return;
    }
    SceneTalkRecord *records = dataTable27GetEntry(&scene->talkTable, 0);
    for (i = 0; i < dataTable27Count(&scene->talkTable); i++) {
        SceneTalkRecord *record = &records[i];
        if (record->kind == scene->kind) {
            SceneTalkRecord copy = *record;
            if (record->requiredFlag != 0 && !gameFlagIsSet(record->requiredFlag)) {
                continue;
            }
            if (record->excludingFlag != 0 && gameFlagIsSet(record->excludingFlag)) {
                continue;
            }
            bool listed = false;
            for (j = 0; j < scene->talkEntryCount; j++) {
                if (scene->talkEntries[j].npc == record->npc) {
                    listed = true;
                    break;
                }
            }
            if (listed) {
                continue;
            }
            scene->talkEntries[scene->talkEntryCount].record = i;
            scene->talkEntries[scene->talkEntryCount].npc = record->npc;
            scene->choiceFlags[scene->talkEntryCount].npc = record->npc;
            scene->talkEntryCount++;
            if (scene->talkEntryCount >= scene->npcCount) {
                break;
            }
        }
    }
    qsort(scene->talkEntries, scene->talkEntryCount, sizeof(SceneTalkEntry),
          (int (*)(const void *, const void *))recordCompareSecondWord);

    if (scene->location == SCENE_LOCATION_HUNTER_COMPANY) {
        char name[0x88];
        SceneNpcPresence present;
        Obj557b18 *body;

        for (i = 0; i < scene->npcCount; i++) {
            /* The model variant to switch off: the one the NPC's row does not use. */
            s32 variant = 0;
            bool listed = false;
            for (j = 0; j < scene->talkEntryCount; j++) {
                if (scene->talkEntries[j].npc == i + 1) {
                    SceneTalkRecord *record = dataTable27GetEntry(&scene->talkTable, scene->talkEntries[j].record);
                    if (record->variant == 1) {
                        variant = 2;
                    } else if (record->variant == 2) {
                        variant = 1;
                    } else {
                        variant = 2;
                    }
                    listed = true;
                    break;
                }
            }
            if (!listed) {
                if (gameFlagIsSet(GAME_FLAG_ABSENT_NPCS) && !(scene->kind == SCENE_KIND_NO_SEVENTH && i == 6)) {
                    showModel(scene->npcControllersA[i]->body);
                    showModel(scene->npcControllersB[i]->body);
                } else {
                    variant = randBetween(1, 2);
                }
            }
            __2sprintf(name, "hunter_company_npc%d_%d", i + 1, variant);
            resourceObjectSetNamedFlag(scene->npcControllersA[i]->body, name, 0);
            __2sprintf(name, "hunter_company_npc%d_%d_add1", i + 1, variant);
            resourceObjectSetNamedFlag(scene->npcControllersB[i]->body, name, 0);
        }

        present.seventh = 0;
        present.eighth = 0;
        present.ninth = 0;
        for (i = 0; i < SCENE_NPC_SLOTS; i++) {
            if (scene->talkEntries[i].npc == 7) {
                present.seventh = 1;
            } else if (scene->talkEntries[i].npc == 8) {
                present.eighth = 1;
            }
            if (scene->talkEntries[i].npc == 9) {
                present.ninth = 1;
            }
        }
        if (!present.eighth && scene->kind == SCENE_KIND_NO_SEVENTH) {
            present.eighth = 1;
        }
        /* The seventh NPC's alternate, the fifth, replaces it unless it is present. */
        if (scene->kind == SCENE_KIND_NO_SEVENTH ? gameFlagIsSet(GAME_FLAG_SEVENTH_NPC) != 0 : !present.seventh) {
            body = scene->npcControllersA[6]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc7_1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc7_2", 0);
            body = scene->npcControllersB[6]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc7_1_add1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc7_2_add1", 0);
        }
        if (present.eighth) {
            body = scene->npcControllersA[4]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc5_1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc5_2", 0);
            body = scene->npcControllersB[4]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc5_1_add1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc5_2_add1", 0);
        } else {
            body = scene->npcControllersA[7]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc8_1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc8_2", 0);
            body = scene->npcControllersB[7]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc8_1_add1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc8_2_add1", 0);
        }
        if (present.ninth) {
            body = scene->npcControllersA[3]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc4_1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc4_2", 0);
            body = scene->npcControllersB[3]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc4_1_add1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc4_2_add1", 0);
        } else {
            body = scene->npcControllersA[8]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc9_1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc9_2", 0);
            body = scene->npcControllersB[8]->body;
            resourceObjectSetNamedFlag(body, "hunter_company_npc9_1_add1", 0);
            resourceObjectSetNamedFlag(body, "hunter_company_npc9_2_add1", 0);
        }
    } else if (scene->location == SCENE_LOCATION_PLAIN) {
        if (gameFlagIsSet(GAME_FLAG_ABSENT_NPCS)) {
            /* Every NPC without a talk entry is shown. */
            u8 listed[12] = { 0 };

            for (i = 0; i < SCENE_NPC_SLOTS; i++) {
                if (scene->talkEntries[i].npc != 0) {
                    listed[scene->talkEntries[i].npc - 1] = 1;
                }
            }
            for (i = 0; i < scene->npcCount; i++) {
                if (!listed[i]) {
                    showModel(scene->npcControllersA[i]->body);
                    showModel(scene->npcControllersB[i]->body);
                }
            }
        }
    }
    scene->startState(2);
}

} /* extern "C" */
