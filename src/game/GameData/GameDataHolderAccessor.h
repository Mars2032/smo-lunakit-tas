/**
 * @file GameDataHolderAccessor.h
 * @brief Wrapper class for GameDataHolder.
 */

#pragma once

#include "al/scene/SceneObjHolder.h"
#include "GameDataHolderWriter.h"

// declaring this here because slappin it into util.hpp causes circular dependency issues
namespace al {
    al::ISceneObj *getSceneObj(al::IUseSceneObjHolder const *holder, int index);
}

class GameDataHolderAccessor : public GameDataHolderWriter
{
    public:
        GameDataHolderAccessor(al::IUseSceneObjHolder const *IUseObjHolder);
        GameDataHolderAccessor(al::SceneObjHolder const *objHolder);
};