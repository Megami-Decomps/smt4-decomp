#include "common.h"
#include "shard/S3SceneWidget.h"

extern "C" {

void FUN_003bb454(SceneWidget *widget);

/* Runs the scene's current state handler, then updates its widget (the function that follows). */
void FUN_003bb3fc(SceneObj *scene)
{
    if (scene->handlers[scene->handlerIndex] != NULL) {
        (scene->*scene->handlers[scene->handlerIndex])();
    }
    FUN_003bb454(&scene->widget);
}

} /* extern "C" */
