#pragma once

#include <initguid.h>

// {6395C922-F29F-471C-A797-E6CEB0B89F78}
DEFINE_GUID(CLSID_GMSINK,
	0x6395c922, 0xf29f, 0x471c, 0xa7, 0x97, 0xe6, 0xce, 0xb0, 0xb8, 0x9f, 0x78);
// {F47C247C-B94A-4227-84B1-7986E5FFA81E}
DEFINE_GUID(CLSID_GMSTREAM_WEBRTC,
	0xf47c247c, 0xb94a, 0x4227, 0x84, 0xb1, 0x79, 0x86, 0xe5, 0xff, 0xa8, 0x1e);
// {9559B840-0092-433C-99F0-D072ED81183A}
DEFINE_GUID(CLSID_GMSESSION_WEBRTC,
	0x9559b840, 0x92, 0x433c, 0x99, 0xf0, 0xd0, 0x72, 0xed, 0x81, 0x18, 0x3a);



// {D4F48EFD-2478-4FFB-A4D6-97F174FABC55}   GM_PARAM_LOCAL_SDP                {STRING}
DEFINE_GUID(GM_PARAM_LOCAL_SDP,
	0xd4f48efd, 0x2478, 0x4ffb, 0xa4, 0xd6, 0x97, 0xf1, 0x74, 0xfa, 0xbc, 0x55);
// {9215ADFA-B033-4E45-A4F3-6871EB957216}   GM_PARAM_REMOTE_SDP                {STRING}
DEFINE_GUID(GM_PARAM_REMOTE_SDP,
	0x9215adfa, 0xb033, 0x4e45, 0xa4, 0xf3, 0x68, 0x71, 0xeb, 0x95, 0x72, 0x16);
// {4D852A76-C6E7-417B-9BB4-565C58F199E4}   GM_PARAM_REMOTE_SDP_OFFER           {STRING}
DEFINE_GUID(GM_PARAM_REMOTE_SDP_OFFER,
	0x4d852a76, 0xc6e7, 0x417b, 0x9b, 0xb4, 0x56, 0x5c, 0x58, 0xf1, 0x99, 0xe4);
// {82C1762C-3416-420F-9077-A53F5AA672BE}   GM_PARAM_REMOTE_SDP_ANSWER          {STRING}
DEFINE_GUID(GM_PARAM_REMOTE_SDP_ANSWER,
	0x82c1762c, 0x3416, 0x420f, 0x90, 0x77, 0xa5, 0x3f, 0x5a, 0xa6, 0x72, 0xbe);
// {179EBCF9-A841-40AE-86FD-DDBDBA903FFA}   GM_PARAM_REMOTE_SDP_PRANSWER        {STRING}
DEFINE_GUID(GM_PARAM_REMOTE_SDP_PRANSWER,
	0x179ebcf9, 0xa841, 0x40ae, 0x86, 0xfd, 0xdd, 0xbd, 0xba, 0x90, 0x3f, 0xfa);


// {DF60D338-3143-4CD2-9287-15045B022ECB}   GM_PARAM_ICE_ENABLED                {UINT32 (BOOL)}
DEFINE_GUID(GM_PARAM_WEBRTC_PROFILE_ENABLED,
	0xdf60d338, 0x3143, 0x4cd2, 0x92, 0x87, 0x15, 0x4, 0x5b, 0x2, 0x2e, 0xcb);
#define GM_PARAM_RTCWEB_PROFILE_ENABLED GM_PARAM_WEBRTC_PROFILE_ENABLED

// {9C80CAB3-E15A-4B01-B397-8F2D9913A9B5}   GM_PARAM_ICE_ENABLED                {UINT32 (BOOL)}
DEFINE_GUID(GM_PARAM_ICE_ENABLED, 
	0x9c80cab3, 0xe15a, 0x4b01, 0xb3, 0x97, 0x8f, 0x2d, 0x99, 0x13, 0xa9, 0xb5);
// {878038B5-20C9-4EB5-B907-F5C756D13125}   GM_PARAM_ICE_STUN_ENABLED           {UINT32 (BOOL)}
DEFINE_GUID(GM_PARAM_ICE_STUN_ENABLED,
	0x878038b5, 0x20c9, 0x4eb5, 0xb9, 0x7, 0xf5, 0xc7, 0x56, 0xd1, 0x31, 0x25);
// {DA03C7C0-BAC0-4E19-85C1-046AC34129B8}   GM_PARAM_ICE_TURN_ENABLED           {UINT32 (BOOL)}
DEFINE_GUID(GM_PARAM_ICE_TURN_ENABLED,
	0xda03c7c0, 0xbac0, 0x4e19, 0x85, 0xc1, 0x4, 0x6a, 0xc3, 0x41, 0x29, 0xb8);
// {3C20F0F0-AA2C-429F-A1C9-6EE5CDD3F1A7}   GM_PARAM_ICE_CALLBACK           {IUnknown (IGmIceCallback)}
DEFINE_GUID(GM_PARAM_ICE_CALLBACK,
	0x3c20f0f0, 0xaa2c, 0x429f, 0xa1, 0xc9, 0x6e, 0xe5, 0xcd, 0xd3, 0xf1, 0xa7);
// {B4080239-9064-4A7B-9EE8-7BFED74DD35E}   GM_PARAM_ICE_SERVER            {STRING}
DEFINE_GUID(GM_PARAM_ICE_SERVER,
	0xb4080239, 0x9064, 0x4a7b, 0x9e, 0xe8, 0x7b, 0xfe, 0xd7, 0x4d, 0xd3, 0x5e);


// {DFE509B9-2F34-488E-8B8A-090D585F5F88}   GM_PARAM_RTCP_ENABLED           {UINT32 (BOOL)}
DEFINE_GUID(GM_PARAM_RTCP_ENABLED,
	0xdfe509b9, 0x2f34, 0x488e, 0x8b, 0x8a, 0x9, 0xd, 0x58, 0x5f, 0x5f, 0x88);
// {DFE509B9-2F34-488E-8B8A-090D585F5F88}   GM_PARAM_RTCPMUX_ENABLED           {UINT32 (BOOL)}
DEFINE_GUID(GM_PARAM_RTCPMUX_ENABLED,
	0xdfe509b9, 0x2f34, 0x488e, 0x8b, 0x8a, 0x9, 0xd, 0x58, 0x5f, 0x5f, 0x88);

// {C7A5F29F-8C63-4FDE-8D9B-FDF76F810012}   GM_PARAM_AVPF_MODE           {UINT32 (0=None, 1=Optional, 2=Mandatory)}
DEFINE_GUID(GM_PARAM_AVPF_MODE,
	0xc7a5f29f, 0x8c63, 0x4fde, 0x8d, 0x9b, 0xfd, 0xf7, 0x6f, 0x81, 0x0, 0x12);

// {A2857FAA-4FF8-40A8-A29B-3F32F414D71E}   GM_PARAM_SRTP_MODE           {UINT32 (0=None, 1=Optional, 2=Mandatory)}
DEFINE_GUID(GM_PARAM_SRTP_MODE,
	0xa2857faa, 0x4ff8, 0x40a8, 0xa2, 0x9b, 0x3f, 0x32, 0xf4, 0x14, 0xd7, 0x1e);
// {8E7C598A-D2B7-4E76-BD20-4F5E068E4B18}   GM_PARAM_SRTP_TYPE           {UINT32 (0=None, 1=SDES, 2=DTLS, 3=BOTH)}
DEFINE_GUID(GM_PARAM_SRTP_TYPE,
	0x8e7c598a, 0xd2b7, 0x4e76, 0xbd, 0x20, 0x4f, 0x5e, 0x6, 0x8e, 0x4b, 0x18);


// {5B60C6C2-F999-4010-9064-02E7E203E73C}   GM_PARAM_SSL_PATH_PUBLIC                {STRING}
DEFINE_GUID(GM_PARAM_SSL_PATH_PUBLIC,
	0x5b60c6c2, 0xf999, 0x4010, 0x90, 0x64, 0x2, 0xe7, 0xe2, 0x3, 0xe7, 0x3c);
// {081EB152-4CF9-4FAB-A38E-5CEE23305496}   GM_PARAM_SSL_PATH_PRIVATE                {STRING}
DEFINE_GUID(GM_PARAM_SSL_PATH_PRIVATE,
	0x81eb152, 0x4cf9, 0x4fab, 0xa3, 0x8e, 0x5c, 0xee, 0x23, 0x30, 0x54, 0x96);
// {DD8BAFD1-5A63-48AA-AD74-A16C756E0470}   GM_PARAM_SSL_PATH_CA                {STRING}
DEFINE_GUID(GM_PARAM_SSL_PATH_CA,
	0xdd8bafd1, 0x5a63, 0x48aa, 0xad, 0x74, 0xa1, 0x6c, 0x75, 0x6e, 0x4, 0x70);


