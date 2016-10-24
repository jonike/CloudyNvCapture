/* \brief
 * IDirect3D9ExVtbl interfaces used by IDirect3D9Ex
 *
 * \file
 *
 * This file defines vtable structure of IDirect3D9Ex.
 *
 * \copyright
 * CopyRight 1993-2016 NVIDIA Corporation.  All rights reserved.
 * NOTICE TO LICENSEE: This source code and/or documentation ("Licensed Deliverables")
 * are subject to the applicable NVIDIA license agreement
 * that governs the use of the Licensed Deliverables.
 */

#include <d3d9.h>

typedef struct IDirect3D9ExVtbl
{
	HRESULT (STDMETHODCALLTYPE *QueryInterface)(IDirect3D9Ex *This, REFIID riid, void** ppvObj);
	ULONG (STDMETHODCALLTYPE *AddRef)(IDirect3D9Ex *This);
	ULONG (STDMETHODCALLTYPE *Release)(IDirect3D9Ex *This);

	HRESULT (STDMETHODCALLTYPE *RegisterSoftwareDevice)(IDirect3D9Ex *This, void* pInitializeFunction);
	UINT (STDMETHODCALLTYPE * GetAdapterCount)(IDirect3D9Ex *This);
	HRESULT (STDMETHODCALLTYPE *GetAdapterIdentifier)(IDirect3D9Ex *This, UINT Adapter,DWORD Flags,D3DADAPTER_IDENTIFIER9* pIdentifier);
	UINT (STDMETHODCALLTYPE * GetAdapterModeCount)(IDirect3D9Ex *This, UINT Adapter,D3DFORMAT Format);
	HRESULT (STDMETHODCALLTYPE *EnumAdapterModes)(IDirect3D9Ex *This, UINT Adapter,D3DFORMAT Format,UINT Mode,D3DDISPLAYMODE* pMode);
	HRESULT (STDMETHODCALLTYPE *GetAdapterDisplayMode)(IDirect3D9Ex *This, UINT Adapter,D3DDISPLAYMODE* pMode);
	HRESULT (STDMETHODCALLTYPE *CheckDeviceType)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DevType,D3DFORMAT AdapterFormat,D3DFORMAT BackBufferFormat,BOOL bWindowed);
	HRESULT (STDMETHODCALLTYPE *CheckDeviceFormat)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT AdapterFormat,DWORD Usage,D3DRESOURCETYPE RType,D3DFORMAT CheckFormat);
	HRESULT (STDMETHODCALLTYPE *CheckDeviceMultiSampleType)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT SurfaceFormat,BOOL Windowed,D3DMULTISAMPLE_TYPE MultiSampleType,DWORD* pQualityLevels);
	HRESULT (STDMETHODCALLTYPE *CheckDepthStencilMatch)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT AdapterFormat,D3DFORMAT RenderTargetFormat,D3DFORMAT DepthStencilFormat);
	HRESULT (STDMETHODCALLTYPE *CheckDeviceFormatConversion)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT SourceFormat,D3DFORMAT TargetFormat);
	HRESULT (STDMETHODCALLTYPE *GetDeviceCaps)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,D3DCAPS9* pCaps);
	HMONITOR (STDMETHODCALLTYPE * GetAdapterMonitor)(IDirect3D9Ex *This, UINT Adapter);
	HRESULT (STDMETHODCALLTYPE *CreateDevice)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,HWND hFocusWindow,DWORD BehaviorFlags,D3DPRESENT_PARAMETERS* pPresentationParameters,IDirect3DDevice9** ppReturnedDeviceInterface);
	UINT (STDMETHODCALLTYPE * GetAdapterModeCountEx)(IDirect3D9Ex *This, UINT Adapter,CONST D3DDISPLAYMODEFILTER* pFilter );
	HRESULT (STDMETHODCALLTYPE *EnumAdapterModesEx)(IDirect3D9Ex *This, UINT Adapter,CONST D3DDISPLAYMODEFILTER* pFilter,UINT Mode,D3DDISPLAYMODEEX* pMode);
	HRESULT (STDMETHODCALLTYPE *GetAdapterDisplayModeEx)(IDirect3D9Ex *This, UINT Adapter,D3DDISPLAYMODEEX* pMode,D3DDISPLAYROTATION* pRotation);
	HRESULT (STDMETHODCALLTYPE *CreateDeviceEx)(IDirect3D9Ex *This, UINT Adapter,D3DDEVTYPE DeviceType,HWND hFocusWindow,DWORD BehaviorFlags,D3DPRESENT_PARAMETERS* pPresentationParameters,D3DDISPLAYMODEEX* pFullscreenDisplayMode,IDirect3DDevice9Ex** ppReturnedDeviceInterface);
	HRESULT (STDMETHODCALLTYPE *GetAdapterLUID)(IDirect3D9Ex *This, UINT Adapter,LUID * pLUID);

} IDirect3D9ExVtbl;
