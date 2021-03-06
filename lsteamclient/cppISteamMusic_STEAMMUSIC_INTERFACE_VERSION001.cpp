#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_142/steam_api.h"
#include "cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001.h"
#ifdef __cplusplus
extern "C" {
#endif
bool cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled(void *linux_side)
{
    return ((ISteamMusic*)linux_side)->BIsEnabled();
}

bool cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying(void *linux_side)
{
    return ((ISteamMusic*)linux_side)->BIsPlaying();
}

AudioPlayback_Status cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus(void *linux_side)
{
    return ((ISteamMusic*)linux_side)->GetPlaybackStatus();
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play(void *linux_side)
{
    ((ISteamMusic*)linux_side)->Play();
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause(void *linux_side)
{
    ((ISteamMusic*)linux_side)->Pause();
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious(void *linux_side)
{
    ((ISteamMusic*)linux_side)->PlayPrevious();
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext(void *linux_side)
{
    ((ISteamMusic*)linux_side)->PlayNext();
}

void cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume(void *linux_side, float flVolume)
{
    ((ISteamMusic*)linux_side)->SetVolume((float)flVolume);
}

float cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume(void *linux_side)
{
    return ((ISteamMusic*)linux_side)->GetVolume();
}

#ifdef __cplusplus
}
#endif
