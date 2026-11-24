/* Map scene registration of models already loaded through MoriModelContent. */
#ifndef SMT4A_MODEL_MORIMODELREGISTRATION_H
#define SMT4A_MODEL_MORIMODELREGISTRATION_H

#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"

enum { MORI_MODEL_SCENE_VISIBILITY_FLAGS = 3 };

/* Registers the content's body with the scene and sets the controller's visibility flags. */
static __inline Obj557b18 *moriModelRegisterSceneContent(MoriModelContent *content)
{
    Obj557b18 *body = content->body;
    handleRegistryRegisterObject(g_handleRegistry, body);
    body->flags |= MORI_MODEL_SCENE_VISIBILITY_FLAGS;
    return body;
}

#endif
