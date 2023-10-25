#pragma once

#include <al/scene/Scene.h>
#include <al/util/NerveUtil.h>
#include <game/GameData/GameDataHolderAccessor.h>

class StageSceneStateWorldMap;
class StageSceneStateShop;
class StageSceneStateSnapShot;
class StageSceneStateGetShine;
class StageSceneStateGetShineMain;
class StageSceneStateGetShineGrand;
class StageSceneStateCollectBgm;
class StageSceneStateCollectionList;
class StageSceneStateMiniGameRanking;
class StageSceneStatePauseMenu;
class StageSceneStateCloset;
class StageSceneStateSkipDemo;
class StageSceneStateCheckpointWarp;
class StageSceneStateCarryMeat;

#if GAME_VERSION == 100
class StageSceneStateTimeBalloon;
class TimeBalloonDirector;
class TimeBalloonSequenceInfo;
class TimeBalloonNpc;
#elif GAME_VERSION == 120
class StageSceneStateBalloonGame;
class StageSceneStateBalloonGameEntry;
class BalloonGameNpc;
class BalloonGameData;
class BalloonGameDataAccessor;
class PlayReportFootPrintHolder;
#endif

class StageSceneStateTitleLogo;
class StageSceneStateMiss;
class StageSceneStateYukimaruRace;
class StageSceneStateYukimaruRaceTutorial;
class StageSceneStateRaceManRace;
class StageSceneStateRadicon;
class StageSceneStateScenarioCamera;
class StageSceneStateRecoverLife;
class StageSceneStateGetShineMainSandWorld;
class StageSceneStateTalk;
class StageSceneStateWarp;
class StageSceneStateWorldIntroCamera;
class ScenarioStartCameraHolder;
class PlayGuideSkip;
class CinemaCaption;
class StageSceneLayout;
class ControllerGuideSnapShotCtrl;
class InputSeparator;
class LocationNameCtrl;
class MiniGameMenu;
class MapLayout;
class CollectionList;
class ProjectItemDirector;
class Pyramid;
class OpeningStageStartDemo;
class SceneAudioSystemPauseController;
class DemoSoundSynchronizer;
class ProjectSeNamedList;
class CollectBgmPlayer;
class CollectBgmRegister;
class BgmAnimeSyncDirector;
class NpcEventDirector;
class ProjectNfpDirector;
class HelpAmiiboDirector;

// custom state, used to pause the scene without opening the pause menu or snapshot
class StageSceneStateStagePause;

namespace al {
class PlacementInfo;
class WipeSimple;
class WipeHolder;
class LiveActorGroup;
class LiveActor;
class ParabolicPath;
class LayoutTextureRenderer;
class DemoSyncedEventKeeper;
class SimpleLayoutAppearWaitEnd;
class WindowConfirm;
class CameraTicket;
class SimpleAudioUser;
class HtmlViewer;
class ChromakeyDrawer;
}  // namespace al

class StageScene : public al::Scene {
public:
    sead::FixedSafeString<64> mStageName;
    int mScenarioNo;
    StageSceneStateWorldMap* mStateWorldMap;
    StageSceneStateShop* mStateShop;
    StageSceneStateSnapShot* mStateSnapShot;
    StageSceneStateGetShine* mStateGetShine;
    StageSceneStateGetShineMain* mStateGetShineMain;
    StageSceneStateGetShineGrand* mStateGetShineGrand;
    StageSceneStateCollectBgm* mStateCollectBgm;
    StageSceneStateCollectionList* mStateCollectionList;
    StageSceneStateMiniGameRanking* mStateMiniGameRanking;
    StageSceneStatePauseMenu* mStagePauseMenu;
    StageSceneStateCloset* mStateCloset;
    StageSceneStateSkipDemo* mStateSkipDemo;
    StageSceneStateCheckpointWarp* mStateCheckpointWarp;
    StageSceneStateCarryMeat* mStateCarryMeat;

#if GAME_VERSION == 100
    StageSceneStateTimeBalloon* mStateTimeBalloon;
#elif GAME_VERSION == 120
    StageSceneStateBalloonGame* mStateBalloonGame;
    StageSceneStateBalloonGameEntry* mStateBalloonGameEntry;
    void* unused_1b8;
#endif

    StageSceneStateTitleLogo* mStateTitleLogo;
    StageSceneStateMiss* mStateMiss;
    StageSceneStateYukimaruRace* mStateYukimaruRace;
    StageSceneStateYukimaruRaceTutorial* mStateYukimaruRaceTutorial;
    StageSceneStateRaceManRace* mStateRaceManRace;
    StageSceneStateRadicon* mStateRadicon;
    StageSceneStateScenarioCamera* mStateScenarioCamera;
    StageSceneStateRecoverLife* mStateRecoverLife;
    StageSceneStateGetShineMainSandWorld* mStateGetShineMainSandWorld;
    StageSceneStateTalk* mStateTalk;
    StageSceneStateWarp* mStateWarp;
    StageSceneStateWorldIntroCamera* mStateWorldIntroCamera;
    ScenarioStartCameraHolder* mScenarioStartCameraHolder;
    sead::FixedSafeString<64> mCostumeName;
    sead::FixedSafeString<64> mCapTypeName;
    void* unused_2c4;
    GameDataHolderAccessor mGameDataHolder;
    al::PlacementInfo* mPlacementInfo;
    al::LayoutTextureRenderer* mLayoutTextureRenderer;
    PlayGuideSkip* mPlayGuideSkip;
    CinemaCaption* mCinemaCaption;
    StageSceneLayout* mStageSceneLayout;
    bool mIsPlayerHackFukankun;
    bool mIsKoopaHackDemo;  // inference, only set around KoopaHackFunction of the same name
    al::SimpleLayoutAppearWaitEnd* mScenarioStartLayout;
    al::SimpleLayoutAppearWaitEnd* mWorldStartCountryLayout;
    al::SimpleLayoutAppearWaitEnd* mWorldStartRegionLayout;
    ControllerGuideSnapShotCtrl* mControllerGuideSnapshotCtrl;
    InputSeparator* mInputSeparator;
    al::WipeSimple* mWipeSimple;
    al::WipeHolder* mWipeHolder;
    LocationNameCtrl* mLocationNameCtrl;
    al::WindowConfirm* mWindowConfirm;
    MiniGameMenu* mMiniGameMenu;
    bool mIsExistShineOrCoinCollectInStage;
    void* unused_360;
    void* unused_368;
    MapLayout* mMapLayout;
    al::SimpleLayoutAppearWaitEnd* mPauseMenu;
    al::LiveActorGroup* mShopGroup;  // name unsure, 2 different LiveActorGroups inited in the same spot(?)
    CollectionList* mCollectionList;
    al::LiveActor* mKoopaLv1;

#if GAME_VERSION == 100
    TimeBalloonNpc* mTimeBalloonNpc;
#elif GAME_VERSION == 120
    BalloonGameNpc* mBalloonGameNpc;
    void* unused_3b0;
#endif

    ProjectItemDirector* mProjectItemDirector;
    Pyramid* mPyramid;
    OpeningStageStartDemo* mOpeningStageStartDemo;
    al::Nerve* mCurrentNerve;
    SceneAudioSystemPauseController* mAudioSystemPauseController;
    DemoSoundSynchronizer* mSoundSynchronizer;
    al::SimpleAudioUser* mStageStartAtmoSe;
    al::SimpleAudioUser* mSePlayerArea;
    al::SimpleAudioUser* mSnapShotCameraCtrl;
    ProjectSeNamedList* mSeNamedList;
    void* unused_3f0;

#if GAME_VERSION == 100
    TimeBalloonDirector* mTimeBalloonDirector;
    TimeBalloonSequenceInfo* mTimeBalloonSequenceInfo;
#elif GAME_VERSION == 120
    BalloonGameData* mBalloonGameData;
    BalloonGameDataAccessor* mBalloonGameDataAccessor;
    void* unused_420;
    void* unused_428;
#endif

    void* unused_408;
    al::CameraTicket* mCheckpointWarpArriveCamera;
    sead::Vector3f mCheckpointWarpTargetPos;
    sead::Vector3f mCheckpointWarpParabolicPathPos;
    sead::Vector3f mCheckpointWarpParabolicPathEnd;
    al::LiveActor* mCheckpointWarpCapActor;
    al::ParabolicPath* mCheckpointWarpParabolicPath;
    al::LiveActor* mDemoShine;
    al::LiveActor* mDemoDotShine;
    void* unused_460;
    CollectBgmPlayer* mCollectBgmPlayer;
    CollectBgmRegister* mCollectBgmRegister;
    BgmAnimeSyncDirector* mBgmAnimeSyncDirector;
    al::DemoSyncedEventKeeper* mDemoSyncedEventKeeper;
    const char* mActiveDemoName;
    int mDemoSynchronizerTimer;  // name unsure
    bool unused_494;
    bool mUpdateKitAndGraphics;
    bool mAlwaysFalse;  // supposed to be set in exeDemoHackStartFirst but presumed coding mistake prevents that
    NpcEventDirector* mNpcEventDirector;

#if GAME_VERSION == 120
    PlayReportFootPrintHolder* mPlayReportFootPrintHolder;
#endif
    
    al::ChromakeyDrawer* mChromakeyDrawer;
    al::HtmlViewer* mHtmlViewer;
    ProjectNfpDirector* mProjectNfpDirector;
    HelpAmiiboDirector* mHelpAmiiboDirector;
    // custom state
    StageSceneStateStagePause* mStatePause;

public:
    StageScene();
    ~StageScene();
    void init(const al::SceneInitInfo& sceneInitInfo);
    void stopCollectBgm();
    bool tryChangeDemo();
    void appear();
    void control();
    bool isIgnoreAddPlayTime() const;
    void kill();
    bool isGetGrandShineAndEnableWipeClose() const;
    bool isGetGrandShine() const;
    bool isVeilEnd() const;
    bool isE3End() const;
    bool isDefeatKoopaLv1() const;
    bool isMissEnd() const;
    bool isHackEnd() const;
    bool isLoadData() const;
    bool isModeSelectEnd() const;
    bool isNewGame() const;
    bool isChangeLanguage() const;
    void getLanguage() const;
    bool isEnableSave() const;
    bool isPause() const;
    void drawMain() const;
    bool isEnableToDrawOddSpace() const;
    void updatePlay();
    void endDemoAndChangeNerve();
    void updateKitListPostAndChangeNextNerve(const al::Nerve*);
    void exeStartStageBgm();
    void exePlay();
    void updateStageSceneLayoutForKoopaHack();
    bool tryChangeSnapShot();
    bool tryStartWarp();
    bool tryChangePause();
    bool tryChangeList();
    void updateStageInfoLayout();
    void endPlay();
    void exeAmiibo();
    void exeMiss();
    void exeSnapShot();
    void exePause();
    void exeDemoStageStart();
    void exeDemoStageStartCapManHeroTalk();
    void exeDemoNormal();
    bool tryAppearDemoLayout();
    void exeDemoNormalBazookaElectric();
    void exeDemoWithPlayer();
    void exeSkipDemo();
    void exeDemoTalk();
    bool tryUpdateAllForFirst();
    void exeDemoWithPlayerUseCoin();
    void exeDemoCountCoin();
    void exeDemoHackStart();
    void exeDemoHackStartFirst();
    void exeDemoCarryMeat();
    void exeDemoTitleLogo();
    void exeDemoShineGet();
    void exeDemoShineMainGet();
    void exeWaitStartWarpForSession();
    void exeDemoShineGrandGet();
    void exeDemoDamageStopPlayer();
    void exeDemoGetLifeMaxUpItem();
    void exeDemoSceneStartPlayerWalk();
    void exeAppearFromWorldWarpHole();
    void exeWaitWarpToCheckpoint();
    void exeWarpToCheckpoint();
    void exeArriveAtCheckpoint();
    void exeWarp();
    void exeDemoWorldIntroCamera();
    void exeDemoPlayerDown();
    void exeDemoScenarioCamera();
    void exeDemoAppearFromHome();
    void exeDemoReturnToHome();
    void exeDemoRiseMapParts();
    void exeDemoRisePyramid();
    void exeDemoShineChipComplete();
    void exeRaceManRace();
    void exeRaceYukimaru();
    void exeRaceYukimaruTutorial();
    void exeRadicon();
    void exeCollectionList();
    void exeShop();
    void exeCloset();
    void exeCollectBgm();
    void exeMiniGameRanking();
    void exeTimeBalloon();
    bool isOpenEndWorldMapWipe() const;
    // custom nerve func
    void exeStagePause();
};

NERVE_HEADER_INSTANCE_(StageScene, StagePause, StagePause);