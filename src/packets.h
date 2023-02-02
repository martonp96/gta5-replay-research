#pragma once
#include <cstdint>

const char* GetPacketName(uint16_t id)
{
	switch (id)
	{
	case 0: return "CPacketLast";
	case 2: return "CPacketAlign";
	case 4: return "CPacketCameraUpdate";
	case 5: return "CPacketClock";
	case 6: return "CPacketWeather";
	case 8: return "CPacketAlign2";
	case 7: return "CPacketWaterSimulate";
	case 9: return "CPacketGameTime";
	case 12: return "CPacketVehicleCreate";
	case 13: return "CPacketVehicleUpdate";
	case 14: return "CPacketVehicleDelete";
	case 15: return "CPacketCarUpdate";
	case 16: return "CPacketBicycleUpdate";
	case 17: return "CPacketBikeUpdate";
	case 18: return "CPacketBoatUpdate";
	case 19: return "CPacketHeliUpdate";
	case 21: return "CPacketBlimpUpdate";
	case 22: return "CPacketPlaneUpdate";
	case 23: return "CPacketQuadBikeUpdate";
	case 24: return "CPacketTrailerUpdate";
	case 25: return "CPacketTrainUpdate";
	case 26: return "CPacketSubUpdate";
	case 27: return "CPacketVehicleWheelUpdate_Old";
	case 28: return "CPacketVehicleDoorUpdate";
	case 31: return "CPacketWheel";
	case 32: return "CPacketVehVariationChange";
	case 40: return "CPacketPedUpdate";
	case 41: return "CPacketPedCreate";
	case 42: return "CPacketPedDelete";
	case 44: return "CPacketPedHeadBlendChange";
	case 45: return "CPacketPedMicroMorphChange";
	case 46: return "CPacketPedVariationChange";
	case 48: return "CPacketObjectCreate";
	case 49: return "CPacketObjectUpdate";
	case 50: return "CPacketDoorUpdate";
	case 51: return "CPacketObjectDelete";
	case 52: return "CPacketHiddenMapObjects";
	case 54: return "CPacketDestroyedMapObjectsForClipStart";
	case 55: return "CPacketObjectSniped";
	case 57: return "CPacketPickupCreate";
	case 58: return "CPacketPickupUpdate";
	case 59: return "CPacketPickupDelete";
	case 62: return "CPacketFragData";
	case 63: return "CPacketFragBoneData";
	case 64: return "CPacketVehicleUpdate::tfragBoneDataType";
	case 65: return "CPacketAnimatedObjBoneData_AdditionalData";
	case 69: return "CPacketEvolvePtFx";
	case 70: return "CPacketPedBreathFx";
	case 71: return "CPacketPedSmokeFx";
	case 72: return "CPacketPedFootFx";
	case 73: return "CPacketPlayerSwitch";
	case 74: return "CPacketVehBackFireFx";
	case 77: return "CPacketVehHeadlightSmashFx";
	case 78: return "CPacketVehResprayFx";
	case 79: return "CPacketVehTyrePunctureFx";
	case 81: return "CPacketVehTyreBurstFx";
	case 82: return "CPacketVehDamageUpdate";
	case 83: return "CPacketVehicleSlipstreamFx";
	case 86: return "CPacketHeliPartsDestroyFx";
	case 87: return "CPacketVehPartFx";
	case 88: return "CPacketFireFx_OLD";
	case 91: return "CPacketFireSmokeFx";
	case 93: return "CPacketFireEntityFx";
	case 94: return "CPacketExplosionFx";
	case 95: return "CPacketWeaponBulletImpactFx";
	case 96: return "CPacketWeaponMuzzleFlashFx";
	case 97: return "CPacketWeaponMuzzleSmokeFx";
	case 98: return "CPacketWeaponBulletTraceFx";
	case 99: return "CPacketWeaponExplosionFx_Old";
	case 100: return "CPacketWeaponExplosionWaterFx";
	case 101: return "CPacketVolumetricFx";
	case 102: return "CPacketWeaponFlashLight";
	case 103: return "CPacketWeaponProjTrailFx";
	case 104: return "CPacketWeaponGunShellFx";
	case 105: return "CPacketBloodFx";
	case 106: return "CPacketBloodDecal";
	case 107: return "CPacketBloodMouthFx";
	case 108: return "CPacketBloodFallDeathFx";
	case 109: return "CPacketBloodWheelSquashFx";
	case 110: return "CPacketBloodPigeonShotFx";
	case 113: return "CPacketEntityFragBreakFx";
	case 114: return "CPacketEntityShotFx_Old";
	case 115: return "CPacketEntityAmbientFx";
	case 120: return "CPacketMaterialBangFx";
	case 121: return "CPacketMiscGlassGroundFx";
	case 122: return "CPacketMiscGlassSmashFx";
	case 123: return "CPacketTrafficLight";
	case 124: return "CPacketStartScriptPtFx";
	case 125: return "CPacketStopScriptPtFx";
	case 126: return "CPacketUpdateOffsetScriptPtFx";
	case 127: return "CPacketTriggeredScriptPtFx";
	case 128: return "CPacketParacuteSmokeFx";
	case 129: return "CPacketRequestPtfxAsset";
	case 130: return "CPacketWaterBoatEntryFx";
	case 131: return "CPacketWaterSplashHeliFx";
	case 132: return "CPacketWaterSplashGenericFx";
	case 133: return "CPacketWaterSplashVehicleFx";
	case 134: return "CPacketWaterSplashVehicleTrailFx";
	case 135: return "CPacketWaterBoatWashFx";
	case 136: return "CPacketWaterSplashPedFx";
	case 137: return "CPacketWaterSplashPedOutFx";
	case 138: return "CPacketWaterSplashPedInFx";
	case 139: return "CPacketWaterBoatBowFx";
	case 140: return "CPacketWaterSplashPedWadeFx";
	case 142: return "CPacketWaterCannonSprayFx";
	case 143: return "CPacketWaterCannonJetFx";
	case 144: return "CPacketWaterFoam";
	case 145: return "CPacketWaterFrame";
	case 146: return "CPacketRippleWakeFx";
	case 147: return "CPacketDynamicWaveFx";
	case 148: return "CPacketPlaneWingtipFx";
	case 149: return "CPacketUpdatePtFxFarClipDist";
	case 150: return "CPacketFireProjectileFx";
	case 151: return "CPacketSubDiveFx";
	case 152: return "CPacketUpdateScriptPtFxColour";
	case 154: return "CPacketDirectionalLightningFxPacket";
	case 155: return "CPacketCloudLightningFxPacket";
	case 156: return "CPacketLightningStrikeFxPacket";
	case 158: return "CPacketBloodPool";
	case 159: return "CPacketPedBloodDamage";
	case 160: return "CPacketPedBloodDamageScript";
	case 161: return "CPacketPTexWeaponShot";
	case 162: return "CPacketPTexFootPrint";
	case 163: return "CPacketPTexMtlBang";
	case 164: return "CPacketPTexMtlScrape";
	case 165: return "CPacketDecalRemove";
	case 166: return "CPacketAddScriptDecal";
	case 167: return "CPacketRemoveScriptDecal";
	case 169: return "CPacketTrailDecal";
	case 170: return "CPacketAddRope_OLD";
	case 171: return "CPacketDeleteRope_OLD";
	case 172: return "CPacketAttachRopeToEntity";
	case 173: return "CPacketAttachEntitiesToRope";
	case 174: return "CPacketDetachRopeFromEntity_OLD";
	case 175: return "CPacketAttachObjectsToRopeArray";
	case 176: return "CPacketPinRope";
	case 177: return "CPacketUnPinRope";
	case 178: return "CPacketRappelPinRope";
	case 179: return "CPacketLoadRopeData";
	case 180: return "CPacketRopeWinding";
	case 181: return "CPacketRopeUpdateOrder";
	case 185: return "CPacketSoundBulletBy";
	case 186: return "CPacketSoundExplosionBulletBy";
	case 187: return "CPacketBulletImpact";
	case 189: return "CPacketCollisionPlayPacket";
	case 190: return "CPacketCollisionUpdatePacket";
	case 192: return "CPacketSoundCreateMisc_Old";
	case 193: return "CPacketSoundCreatePos";
	case 194: return "CPacketSoundCreate";
	case 195: return "CPacketSoundCreatePersistant";
	case 196: return "CPacketSoundPhoneRing";
	case 197: return "CPacketSoundStopPhoneRing";
	case 198: return "CPacketPresuckSound";
	case 199: return "CPacketExplosion";
	case 203: return "CPacketFootStepSound";
	case 204: return "CPacketPedBushSound";
	case 205: return "CPacketPedClothSound";
	case 206: return "CPacketPedPetrolCanSound";
	case 207: return "CPacketPedMolotovSound";
	case 208: return "CPacketPedWaterSound";
	case 209: return "CPacketPedSlopeDebrisSound";
	case 210: return "CPacketPedStandingMaterial";
	case 211: return "CPacketProjectile";
	case 212: return "CPacketProjectileStop";
	case 215: return "CPacketSoundStop";
	case 216: return "CPacketSoundStart";
	case 218: return "CPacketSoundUpdateLPFCutoff";
	case 219: return "CPacketSoundUpdatePitch";
	case 220: return "CPacketSoundUpdatePitchPos";
	case 221: return "CPacketSoundUpdatePitchPosVol";
	case 222: return "CPacketSoundUpdatePitchVol";
	case 223: return "CPacketSoundUpdatePosition";
	case 224: return "CPacketSoundUpdatePosVol";
	case 225: return "CPacketSoundUpdatePostSubmix";
	case 226: return "CPacketSoundUpdateSettings";
	case 227: return "CPacketSoundUpdateVolume";
	case 228: return "CPacketSoundUpdateDoppler";
	case 229: return "CPacketSoundSetValueDH";
	case 230: return "CPacketSoundSetClientVar";
	case 231: return "CPacketVehiclePedCollisionPacket";
	case 232: return "CPacketPedImpactPacket";
	case 233: return "CPacketWeaponSoundFireEventOld";
	case 234: return "CPacketWeaponPersistant";
	case 235: return "CPacketWeaponPersistantStop";
	case 236: return "CPacketWeaponSpinUp";
	case 237: return "CPacketSoundWeaponEcho";
	case 238: return "CPacketScriptedSpeech";
	case 239: return "CPacketSpeechPain";
	case 240: return "CPacketSpeechStop";
	case 241: return "CPacketSpeech";
	case 243: return "CPacketScriptedSpeechUpdate";
	case 244: return "CPacketAnimalVocalization";
	case 245: return "CPacketPlayPreloadedSpeech";
	case 246: return "CCutSceneAudioPacket";
	case 247: return "CCutSceneStopAudioPacket";
	case 248: return "CSynchSceneAudioPacket";
	case 249: return "CSynchSceneStopAudioPacket";
	case 250: return "CPacketVehicleHorn";
	case 251: return "CPacketVehicleHornStop";
	case 252: return "CPacketVehicleSplashPacket";
	case 253: return "CPacketPedScriptSweetenerSound";
	case 254: return "CPacketSndLoadWeaponData";
	case 255: return "CPacketPainWaveBankChange";
	case 256: return "CPacketSetPlayerPainRoot";
	case 257: return "CPacketPlayStreamFromEntity";
	case 258: return "CPacketPlayStreamFromPosition";
	case 259: return "CPacketPlayStreamFrontend";
	case 260: return "CPacketStopStream";
	case 261: return "CPacketSndLoadScriptBank";
	case 262: return "CPacketDynamicMixerScene";
	case 263: return "CPacketPortalOcclusionOverrides";
	case 264: return "CPacketModifiedAmbientZoneStates";
	case 265: return "CPacketScriptSetVarOnSound";
	case 266: return "CPacketSoundUpdatePersistant";
	case 267: return "CPacketActiveAlarms";
	case 268: return "CPacketSndLoadScriptWaveBank";
	case 269: return "CPacketSceneSetVariable";
	case 272: return "CPacketSmashableExplosion";
	case 273: return "CPacketSmashableCollision";
	case 277: return "CPacketScriptedFx";
	case 278: return "CPacketAnimatedObjBoneData";
	case 279: return "CPacketBuildingSwap";
	case 280: return "CPacketScriptedUpdateFx";
	case 281: return "CPacketTriggeredScriptPtFxColour";
	case 282: return "CPacketCreateBreakableGlass";
	case 283: return "CPacketHitGlass";
	case 284: return "CPacketMovie";
	case 285: return "CPacketMovieTarget";
	case 286: return "CPacketMovieEntity";
	case 287: return "CPacketIPL";
	case 288: return "CPacketInteriorProxyStates";
	case 289: return "CPacketForceRoomForGameViewport";
	case 290: return "CPacketInterior";
	case 291: return "CPacketInteriorEntitySet";
	case 292: return "CPacketMapChange";
	case 293: return "CPacketMeshSet";
	case 294: return "CPacketRayFireStatic";
	case 295: return "CPacketRayFirePreLoad";
	case 296: return "CPacketRayFireUpdating";
	case 297: return "CPacketScriptTCModifier";
	case 298: return "CPacketRequestCloudHat";
	case 299: return "CPacketUnloadAllCloudHats";
	case 300: return "CPacketWeaponThermalVision";
	case 301: return "CPacketCutsceneLight";
	case 302: return "CPacketCutsceneCharacterLightParams";
	case 303: return "CPacketCutsceneCameraArgs";
	case 304: return "CPacketCutsceneNonRPObjectHide";
	case 305: return "CPacketLightBroken";
	case 306: return "CPacketPedLight";
	case 307: return "CPacketPhoneLight";
	case 309: return "CPacketPtFxFragmentDestroy";
	case 310: return "CPacketDecalFragmentDestroy";
	case 311: return "CPacketTransferGlass";
	case 312: return "CPacketTowTruckArmRotate";
	case 313: return "CPacketPTexMtlScrape_PlayerVeh";
	case 314: return "CPacketPTexMtlBang_PlayerVeh";
	case 315: return "CPacketVehDamageUpdate_PlayerVeh";
	case 316: return "CPacketDistantCarState";
	case 317: return "CPacketTimeCycleModifier";
	case 318: return "CPacketEntityAttachDetach";
	case 319: return "CPacketAudioPedScenarios";
	case 320: return "CPacketFragData_NoDamageBits";
	case 321: return "CPacketAddRope";
	case 322: return "CPacketDeleteRope";
	case 323: return "CPacketDetachRopeFromEntity";
	case 324: return "CPacketModelCull";
	case 325: return "CPacketDisableOcclusion";
	case 326: return "CPacketDisableDecalRendering";
	case 327: return "CPacketFireFx";
	case 328: return "CPacketBloodSharkBiteFx";
	case 330: return "CPacketClothPieces";
	case 331: return "CPacketForceRoomForEntity";
	case 332: return "CPacketSetUnderWaterStreamVariable";
	case 333: return "CPacketOverrideUnderWaterStream";
	case 334: return "CPacketScriptAudioFlags";
	case 335: return "CPacketStopFireFx";
	case 336: return "CPacketEntityShotFx";
	case 337: return "CPacketSoundCreateMisc";
	case 338: return "CPacketBriefLifeTimeDestroyedMapObjects";
	case 339: return "CPacketWeaponSoundFireEvent";
	case 340: return "CPacketWeaponExplosionFx";
	case 341: return "CPacketVehicleBadgeRequest";
	case 342: return "CPacketScriptAudioSpecialEffectMode";
	case 343: return "CPacketDisabledThisFrame";
	case 344: return "CPacketStartNetworkScriptPtFx";
	case 345: return "CPacketForceVehInteriorScriptPtFx";
	case 346: return "CPacketDestroyScriptPtFx";
	case 347: return "CPacketRegisterVehicleFire";
	case 348: return "CPacketWeaponBulletTraceFx2";
	case 349: return "CPacketSoundCreateMiscWithVars";
	case 350: return "CPacketRequestNamedPtfxAsset";
	case 351: return "CPacketThermalVisionValues";
	case 352: return "CPacketSetDummyObjectTint";
	case 353: return "CPacketAddSnowballDecal";
	case 354: return "CPacketInteriorEntitySet2";
	case 355: return "CPacketRegisterAndLinkRenderTarget";
	case 356: return "CPacketSetGFXAlign";
	case 357: return "CPacketSetRender";
	case 358: return "CPacketDrawSprite";
	case 359: return "CPacketTrailPolyFrame";
	case 360: return "CPacketAmphAutoUpdate";
	case 361: return "CPacketAmphQuadUpdate";
	case 362: return "CPacketSetObjectTint";
	case 363: return "CPacketVehicleJumpRechargeTimer";
	case 364: return "CPacketSetBuildingTint";
	case 365: return "CPacketBulletImpactNew";
	case 366: return "CPacketThermalScopeAudio";
	case 367: return "CPacketFocusEntity";
	case 368: return "CPacketWeaponAutoFireStop";
	case 369: return "CPacketVehicleUpdate::tfragBoneDataType_HighQuality";
	case 370: return "CPacketVehicleUpdate__tfragBoneDataType_HQ_AdditionalData";
	case 371: return "CPacketSubCarUpdate";
	case 372: return "CPacketVehicleWeaponCharge";
	case 373: return "CPacketFocusPosAndVel";
	default: return "unknown";
	}
}

enum ePacketID : uint16_t
{
	CPacketLast = 0,
	CPacketAlign = 2,
	CPacketCameraUpdate = 4,
	CPacketClock = 5,
	CPacketWeather = 6,
	CPacketWaterSimulate = 7,
	CPacketAlign2 = 8,
	CPacketGameTime = 9,
	CPacketVehicleCreate = 12,
	CPacketVehicleUpdate = 13,
	CPacketVehicleDelete = 14,
	CPacketCarUpdate = 15,
	CPacketBicycleUpdate = 16,
	CPacketBikeUpdate = 17,
	CPacketBoatUpdate = 18,
	CPacketHeliUpdate = 19,
	CPacketBlimpUpdate = 21,
	CPacketPlaneUpdate = 22,
	CPacketQuadBikeUpdate = 23,
	CPacketTrailerUpdate = 24,
	CPacketTrainUpdate = 25,
	CPacketSubUpdate = 26,
	CPacketVehicleWheelUpdate_Old = 27,
	CPacketVehicleDoorUpdate = 28,
	CPacketWheel = 31,
	CPacketVehVariationChange = 32,
	CPacketPedUpdate = 40,
	CPacketPedCreate = 41,
	CPacketPedDelete = 42,
	CPacketPedHeadBlendChange = 44,
	CPacketPedMicroMorphChange = 45,
	CPacketPedVariationChange = 46,
	CPacketObjectCreate = 48,
	CPacketObjectUpdate = 49,
	CPacketDoorUpdate = 50,
	CPacketObjectDelete = 51,
	CPacketHiddenMapObjects = 52,
	CPacketDestroyedMapObjectsForClipStart = 54,
	CPacketObjectSniped = 55,
	CPacketPickupCreate = 57,
	CPacketPickupUpdate = 58,
	CPacketPickupDelete = 59,
	CPacketFragData = 62,
	CPacketFragBoneData = 63,
	CPacketVehicleUpdate__tfragBoneDataType = 64,
	CPacketAnimatedObjBoneData_AdditionalData = 65,
	CPacketEvolvePtFx = 69,
	CPacketPedBreathFx = 70,
	CPacketPedSmokeFx = 71,
	CPacketPedFootFx = 72,
	CPacketPlayerSwitch = 73,
	CPacketVehBackFireFx = 74,
	CPacketVehHeadlightSmashFx = 77,
	CPacketVehResprayFx = 78,
	CPacketVehTyrePunctureFx = 79,
	CPacketVehTyreBurstFx = 81,
	CPacketVehDamageUpdate = 82,
	CPacketVehicleSlipstreamFx = 83,
	CPacketHeliPartsDestroyFx = 86,
	CPacketVehPartFx = 87,
	CPacketFireFx_OLD = 88,
	CPacketFireSmokeFx = 91,
	CPacketFireEntityFx = 93,
	CPacketExplosionFx = 94,
	CPacketWeaponBulletImpactFx = 95,
	CPacketWeaponMuzzleFlashFx = 96,
	CPacketWeaponMuzzleSmokeFx = 97,
	CPacketWeaponBulletTraceFx = 98,
	CPacketWeaponExplosionFx_Old = 99,
	CPacketWeaponExplosionWaterFx = 100,
	CPacketVolumetricFx = 101,
	CPacketWeaponFlashLight = 102,
	CPacketWeaponProjTrailFx = 103,
	CPacketWeaponGunShellFx = 104,
	CPacketBloodFx = 105,
	CPacketBloodDecal = 106,
	CPacketBloodMouthFx = 107,
	CPacketBloodFallDeathFx = 108,
	CPacketBloodWheelSquashFx = 109,
	CPacketBloodPigeonShotFx = 110,
	CPacketEntityFragBreakFx = 113,
	CPacketEntityShotFx_Old = 114,
	CPacketEntityAmbientFx = 115,
	CPacketMaterialBangFx = 120,
	CPacketMiscGlassGroundFx = 121,
	CPacketMiscGlassSmashFx = 122,
	CPacketTrafficLight = 123,
	CPacketStartScriptPtFx = 124,
	CPacketStopScriptPtFx = 125,
	CPacketUpdateOffsetScriptPtFx = 126,
	CPacketTriggeredScriptPtFx = 127,
	CPacketParacuteSmokeFx = 128,
	CPacketRequestPtfxAsset = 129,
	CPacketWaterBoatEntryFx = 130,
	CPacketWaterSplashHeliFx = 131,
	CPacketWaterSplashGenericFx = 132,
	CPacketWaterSplashVehicleFx = 133,
	CPacketWaterSplashVehicleTrailFx = 134,
	CPacketWaterBoatWashFx = 135,
	CPacketWaterSplashPedFx = 136,
	CPacketWaterSplashPedOutFx = 137,
	CPacketWaterSplashPedInFx = 138,
	CPacketWaterBoatBowFx = 139,
	CPacketWaterSplashPedWadeFx = 140,
	CPacketWaterCannonSprayFx = 142,
	CPacketWaterCannonJetFx = 143,
	CPacketWaterFoam = 144,
	CPacketWaterFrame = 145,
	CPacketRippleWakeFx = 146,
	CPacketDynamicWaveFx = 147,
	CPacketPlaneWingtipFx = 148,
	CPacketUpdatePtFxFarClipDist = 149,
	CPacketFireProjectileFx = 150,
	CPacketSubDiveFx = 151,
	CPacketUpdateScriptPtFxColour = 152,
	CPacketDirectionalLightningFxPacket = 154,
	CPacketCloudLightningFxPacket = 155,
	CPacketLightningStrikeFxPacket = 156,
	CPacketBloodPool = 158,
	CPacketPedBloodDamage = 159,
	CPacketPedBloodDamageScript = 160,
	CPacketPTexWeaponShot = 161,
	CPacketPTexFootPrint = 162,
	CPacketPTexMtlBang = 163,
	CPacketPTexMtlScrape = 164,
	CPacketDecalRemove = 165,
	CPacketAddScriptDecal = 166,
	CPacketRemoveScriptDecal = 167,
	CPacketTrailDecal = 169,
	CPacketAddRope_OLD = 170,
	CPacketDeleteRope_OLD = 171,
	CPacketAttachRopeToEntity = 172,
	CPacketAttachEntitiesToRope = 173,
	CPacketDetachRopeFromEntity_OLD = 174,
	CPacketAttachObjectsToRopeArray = 175,
	CPacketPinRope = 176,
	CPacketUnPinRope = 177,
	CPacketRappelPinRope = 178,
	CPacketLoadRopeData = 179,
	CPacketRopeWinding = 180,
	CPacketRopeUpdateOrder = 181,
	CPacketSoundBulletBy = 185,
	CPacketSoundExplosionBulletBy = 186,
	CPacketBulletImpact = 187,
	CPacketCollisionPlayPacket = 189,
	CPacketCollisionUpdatePacket = 190,
	CPacketSoundCreateMisc_Old = 192,
	CPacketSoundCreatePos = 193,
	CPacketSoundCreate = 194,
	CPacketSoundCreatePersistant = 195,
	CPacketSoundPhoneRing = 196,
	CPacketSoundStopPhoneRing = 197,
	CPacketPresuckSound = 198,
	CPacketExplosion = 199,
	CPacketFootStepSound = 203,
	CPacketPedBushSound = 204,
	CPacketPedClothSound = 205,
	CPacketPedPetrolCanSound = 206,
	CPacketPedMolotovSound = 207,
	CPacketPedWaterSound = 208,
	CPacketPedSlopeDebrisSound = 209,
	CPacketPedStandingMaterial = 210,
	CPacketProjectile = 211,
	CPacketProjectileStop = 212,
	CPacketSoundStop = 215,
	CPacketSoundStart = 216,
	CPacketSoundUpdateLPFCutoff = 218,
	CPacketSoundUpdatePitch = 219,
	CPacketSoundUpdatePitchPos = 220,
	CPacketSoundUpdatePitchPosVol = 221,
	CPacketSoundUpdatePitchVol = 222,
	CPacketSoundUpdatePosition = 223,
	CPacketSoundUpdatePosVol = 224,
	CPacketSoundUpdatePostSubmix = 225,
	CPacketSoundUpdateSettings = 226,
	CPacketSoundUpdateVolume = 227,
	CPacketSoundUpdateDoppler = 228,
	CPacketSoundSetValueDH = 229,
	CPacketSoundSetClientVar = 230,
	CPacketVehiclePedCollisionPacket = 231,
	CPacketPedImpactPacket = 232,
	CPacketWeaponSoundFireEventOld = 233,
	CPacketWeaponPersistant = 234,
	CPacketWeaponPersistantStop = 235,
	CPacketWeaponSpinUp = 236,
	CPacketSoundWeaponEcho = 237,
	CPacketScriptedSpeech = 238,
	CPacketSpeechPain = 239,
	CPacketSpeechStop = 240,
	CPacketSpeech = 241,
	CPacketScriptedSpeechUpdate = 243,
	CPacketAnimalVocalization = 244,
	CPacketPlayPreloadedSpeech = 245,
	CCutSceneAudioPacket = 246,
	CCutSceneStopAudioPacket = 247,
	CSynchSceneAudioPacket = 248,
	CSynchSceneStopAudioPacket = 249,
	CPacketVehicleHorn = 250,
	CPacketVehicleHornStop = 251,
	CPacketVehicleSplashPacket = 252,
	CPacketPedScriptSweetenerSound = 253,
	CPacketSndLoadWeaponData = 254,
	CPacketPainWaveBankChange = 255,
	CPacketSetPlayerPainRoot = 256,
	CPacketPlayStreamFromEntity = 257,
	CPacketPlayStreamFromPosition = 258,
	CPacketPlayStreamFrontend = 259,
	CPacketStopStream = 260,
	CPacketSndLoadScriptBank = 261,
	CPacketDynamicMixerScene = 262,
	CPacketPortalOcclusionOverrides = 263,
	CPacketModifiedAmbientZoneStates = 264,
	CPacketScriptSetVarOnSound = 265,
	CPacketSoundUpdatePersistant = 266,
	CPacketActiveAlarms = 267,
	CPacketSndLoadScriptWaveBank = 268,
	CPacketSceneSetVariable = 269,
	CPacketSmashableExplosion = 272,
	CPacketSmashableCollision = 273,
	CPacketScriptedFx = 277,
	CPacketAnimatedObjBoneData = 278,
	CPacketBuildingSwap = 279,
	CPacketScriptedUpdateFx = 280,
	CPacketTriggeredScriptPtFxColour = 281,
	CPacketCreateBreakableGlass = 282,
	CPacketHitGlass = 283,
	CPacketMovie = 284,
	CPacketMovieTarget = 285,
	CPacketMovieEntity = 286,
	CPacketIPL = 287,
	CPacketInteriorProxyStates = 288,
	CPacketForceRoomForGameViewport = 289,
	CPacketInterior = 290,
	CPacketInteriorEntitySet = 291,
	CPacketMapChange = 292,
	CPacketMeshSet = 293,
	CPacketRayFireStatic = 294,
	CPacketRayFirePreLoad = 295,
	CPacketRayFireUpdating = 296,
	CPacketScriptTCModifier = 297,
	CPacketRequestCloudHat = 298,
	CPacketUnloadAllCloudHats = 299,
	CPacketWeaponThermalVision = 300,
	CPacketCutsceneLight = 301,
	CPacketCutsceneCharacterLightParams = 302,
	CPacketCutsceneCameraArgs = 303,
	CPacketCutsceneNonRPObjectHide = 304,
	CPacketLightBroken = 305,
	CPacketPedLight = 306,
	CPacketPhoneLight = 307,
	CPacketPtFxFragmentDestroy = 309,
	CPacketDecalFragmentDestroy = 310,
	CPacketTransferGlass = 311,
	CPacketTowTruckArmRotate = 312,
	CPacketPTexMtlScrape_PlayerVeh = 313,
	CPacketPTexMtlBang_PlayerVeh = 314,
	CPacketVehDamageUpdate_PlayerVeh = 315,
	CPacketDistantCarState = 316,
	CPacketTimeCycleModifier = 317,
	CPacketEntityAttachDetach = 318,
	CPacketAudioPedScenarios = 319,
	CPacketFragData_NoDamageBits = 320,
	CPacketAddRope = 321,
	CPacketDeleteRope = 322,
	CPacketDetachRopeFromEntity = 323,
	CPacketModelCull = 324,
	CPacketDisableOcclusion = 325,
	CPacketDisableDecalRendering = 326,
	CPacketFireFx = 327,
	CPacketBloodSharkBiteFx = 328,
	CPacketClothPieces = 330,
	CPacketForceRoomForEntity = 331,
	CPacketSetUnderWaterStreamVariable = 332,
	CPacketOverrideUnderWaterStream = 333,
	CPacketScriptAudioFlags = 334,
	CPacketStopFireFx = 335,
	CPacketEntityShotFx = 336,
	CPacketSoundCreateMisc = 337,
	CPacketBriefLifeTimeDestroyedMapObjects = 338,
	CPacketWeaponSoundFireEvent = 339,
	CPacketWeaponExplosionFx = 340,
	CPacketVehicleBadgeRequest = 341,
	CPacketScriptAudioSpecialEffectMode = 342,
	CPacketDisabledThisFrame = 343,
	CPacketStartNetworkScriptPtFx = 344,
	CPacketForceVehInteriorScriptPtFx = 345,
	CPacketDestroyScriptPtFx = 346,
	CPacketRegisterVehicleFire = 347,
	CPacketWeaponBulletTraceFx2 = 348,
	CPacketSoundCreateMiscWithVars = 349,
	CPacketRequestNamedPtfxAsset = 350,
	CPacketThermalVisionValues = 351,
	CPacketSetDummyObjectTint = 352,
	CPacketAddSnowballDecal = 353,
	CPacketInteriorEntitySet2 = 354,
	CPacketRegisterAndLinkRenderTarget = 355,
	CPacketSetGFXAlign = 356,
	CPacketSetRender = 357,
	CPacketDrawSprite = 358,
	CPacketTrailPolyFrame = 359,
	CPacketAmphAutoUpdate = 360,
	CPacketAmphQuadUpdate = 361,
	CPacketSetObjectTint = 362,
	CPacketVehicleJumpRechargeTimer = 363,
	CPacketSetBuildingTint = 364,
	CPacketBulletImpactNew = 365,
	CPacketThermalScopeAudio = 366,
	CPacketFocusEntity = 367,
	CPacketWeaponAutoFireStop = 368,
	CPacketVehicleUpdate__tfragBoneDataType_HighQuality = 369,
	CPacketVehicleUpdate__tfragBoneDataType_HQ_AdditionalData = 370,
	CPacketSubCarUpdate = 371,
	CPacketVehicleWeaponCharge = 372,
	CPacketFocusPosAndVel = 373
};