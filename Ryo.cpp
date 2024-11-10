// ==WindhawkMod==
// @id              taskbar-11
// @name            TaskbarXI
// @description     ✦ Taskbar 11 Alteration
// @version         4.0.0
// @author          ryokr
// @github          https://github.com/ryokr
// @include         explorer.exe
// @architecture    x86-64
// @compilerOptions -lcomctl32 -lole32 -loleaut32 -lruntimeobject -Wl,--export-all-symbols
// ==/WindhawkMod==

// -------------------------------------------------------------------------------------------------------------
// clang-format off
#pragma region winrt_hpp

#include <guiddef.h>
#include <Unknwn.h>
#include <winrt/base.h>

// forward declare namespaces we alias
namespace winrt {
    namespace Windows {
        namespace Foundation::Collections {}
        namespace UI::Xaml {
            namespace Controls {}
            namespace Hosting {}
        }
    }
}

// alias some long namespaces for convenience
namespace wf = winrt::Windows::Foundation;
// namespace wfc = wf::Collections;
namespace wux = winrt::Windows::UI::Xaml;
// namespace wuxc = wux::Controls;
namespace wuxh = wux::Hosting;

#pragma endregion  // winrt_hpp
// -------------------------------------------------------------------------------------------------------------
#pragma region xamlOM_h

/* this ALWAYS GENERATED file contains the definitions for the interfaces */

 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/

#ifndef __xamlom_h__
#define __xamlom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
// #pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVisualTreeServiceCallback_FWD_DEFINED__
#define __IVisualTreeServiceCallback_FWD_DEFINED__
typedef interface IVisualTreeServiceCallback IVisualTreeServiceCallback;
#endif 	/* __IVisualTreeServiceCallback_FWD_DEFINED__ */

#ifndef __IVisualTreeServiceCallback2_FWD_DEFINED__
#define __IVisualTreeServiceCallback2_FWD_DEFINED__
typedef interface IVisualTreeServiceCallback2 IVisualTreeServiceCallback2;
#endif 	/* __IVisualTreeServiceCallback2_FWD_DEFINED__ */

#ifndef __IVisualTreeService_FWD_DEFINED__
#define __IVisualTreeService_FWD_DEFINED__
typedef interface IVisualTreeService IVisualTreeService;
#endif 	/* __IVisualTreeService_FWD_DEFINED__ */

#ifndef __IXamlDiagnostics_FWD_DEFINED__
#define __IXamlDiagnostics_FWD_DEFINED__
typedef interface IXamlDiagnostics IXamlDiagnostics;
#endif 	/* __IXamlDiagnostics_FWD_DEFINED__ */

#ifndef __IBitmapData_FWD_DEFINED__
#define __IBitmapData_FWD_DEFINED__
typedef interface IBitmapData IBitmapData;
#endif 	/* __IBitmapData_FWD_DEFINED__ */

#ifndef __IVisualTreeService2_FWD_DEFINED__
#define __IVisualTreeService2_FWD_DEFINED__
typedef interface IVisualTreeService2 IVisualTreeService2;
#endif 	/* __IVisualTreeService2_FWD_DEFINED__ */

#ifndef __IVisualTreeService3_FWD_DEFINED__
#define __IVisualTreeService3_FWD_DEFINED__
typedef interface IVisualTreeService3 IVisualTreeService3;
#endif 	/* __IVisualTreeService3_FWD_DEFINED__ */

/* header files for imported files */
#include <oaidl.h>
#include <ocidl.h>
#include <inspectable.h>
#include <dxgi1_2.h>

#ifdef __cplusplus
extern "C"{
#endif

/* interface __MIDL_itf_xamlom_0000_0000 */
/* [local] */ 

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
// #pragma warning(push)
// #pragma warning(disable:4668) 
// #pragma warning(disable:4001) 
// #pragma once
// #pragma warning(pop)
// Win32 API definitions
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#define E_UNKNOWNTYPE MAKE_HRESULT(SEVERITY_ERROR, FACILITY_XAML, 40L)
_Check_return_ HRESULT InitializeXamlDiagnostic(_In_ LPCWSTR endPointName, _In_ DWORD pid, _In_ LPCWSTR wszDllXamlDiagnostics, _In_ LPCWSTR wszTAPDllName,  _In_ CLSID tapClsid);
_Check_return_ HRESULT InitializeXamlDiagnosticsEx(_In_ LPCWSTR endPointName, _In_ DWORD pid, _In_ LPCWSTR wszDllXamlDiagnostics, _In_ LPCWSTR wszTAPDllName, _In_ CLSID tapClsid, _In_ LPCWSTR wszInitializationData);
typedef MIDL_uhyper InstanceHandle;

typedef enum VisualMutationType {
    Add	= 0,
    Remove	= ( Add + 1 ) 
} 	VisualMutationType;

typedef enum BaseValueSource {
    BaseValueSourceUnknown = 0,
    BaseValueSourceDefault = ( BaseValueSourceUnknown + 1 ) ,
    BaseValueSourceBuiltInStyle	= ( BaseValueSourceDefault + 1 ) ,
    BaseValueSourceStyle = ( BaseValueSourceBuiltInStyle + 1 ) ,
    BaseValueSourceLocal = ( BaseValueSourceStyle + 1 ) ,
    Inherited = ( BaseValueSourceLocal + 1 ) ,
    DefaultStyleTrigger	= ( Inherited + 1 ) ,
    TemplateTrigger	= ( DefaultStyleTrigger + 1 ) ,
    StyleTrigger = ( TemplateTrigger + 1 ) ,
    ImplicitStyleReference = ( StyleTrigger + 1 ) ,
    ParentTemplate = ( ImplicitStyleReference + 1 ) ,
    ParentTemplateTrigger = ( ParentTemplate + 1 ) ,
    Animation = ( ParentTemplateTrigger + 1 ) ,
    Coercion = ( Animation + 1 ) ,
    BaseValueSourceVisualState = ( Coercion + 1 ) 
} 	BaseValueSource;

typedef struct SourceInfo {
    BSTR FileName;
    unsigned int LineNumber;
    unsigned int ColumnNumber;
    unsigned int CharPosition;
    BSTR Hash;
} 	SourceInfo;

typedef struct ParentChildRelation {
    InstanceHandle Parent;
    InstanceHandle Child;
    unsigned int ChildIndex;
} 	ParentChildRelation;

typedef struct VisualElement {
    InstanceHandle Handle;
    SourceInfo SrcInfo;
    BSTR Type;
    BSTR Name;
    unsigned int NumChildren;
} 	VisualElement;

typedef struct PropertyChainSource {
    InstanceHandle Handle;
    BSTR TargetType;
    BSTR Name;
    BaseValueSource Source;
    SourceInfo SrcInfo;
} 	PropertyChainSource;

typedef enum MetadataBit {
    None = 0,
    IsValueHandle = 0x1,
    IsPropertyReadOnly = 0x2,
    IsValueCollection = 0x4,
    IsValueCollectionReadOnly = 0x8,
    IsValueBindingExpression  = 0x10,
    IsValueNull	= 0x20,
    IsValueHandleAndEvaluatedValue = 0x40
} 	MetadataBit;

typedef struct PropertyChainValue {
    unsigned int Index;
    BSTR Type;
    BSTR DeclaringType;
    BSTR ValueType;
    BSTR ItemType;
    BSTR Value;
    BOOL Overridden;
    hyper MetadataBits;
    BSTR PropertyName;
    unsigned int PropertyChainIndex;
} 	PropertyChainValue;

typedef struct EnumType {
    BSTR Name;
    SAFEARRAY * ValueInts;
    SAFEARRAY * ValueStrings;
} 	EnumType;

typedef struct CollectionElementValue {
    unsigned int Index;
    BSTR ValueType;
    BSTR Value;
    hyper MetadataBits;
} 	CollectionElementValue;

typedef  enum RenderTargetBitmapOptions {
    RenderTarget	= 0,
    RenderTargetAndChildren	= ( RenderTarget + 1 ) 
} 	RenderTargetBitmapOptions;

typedef struct BitmapDescription {
    unsigned int Width;
    unsigned int Height;
    DXGI_FORMAT Format;
    DXGI_ALPHA_MODE AlphaMode;
} 	BitmapDescription;

typedef enum ResourceType {
    ResourceTypeStatic	= 0,
    ResourceTypeTheme	= ( ResourceTypeStatic + 1 ) 
} 	ResourceType;

typedef enum VisualElementState {
    ErrorResolved	= 0,
    ErrorResourceNotFound	= ( ErrorResolved + 1 ) ,
    ErrorInvalidResource	= ( ErrorResourceNotFound + 1 ) 
}   VisualElementState;

extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0000_v0_0_s_ifspec;

#ifndef __IVisualTreeServiceCallback_INTERFACE_DEFINED__
#define __IVisualTreeServiceCallback_INTERFACE_DEFINED__

/* interface IVisualTreeServiceCallback */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IVisualTreeServiceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IVisualTreeServiceCallback, 0xAA7A8931, 0x80E4, 0x4FEC, 0x8F, 0x3B, 0x55, 0x3F, 0x87, 0xB4, 0x96, 0x6E);
    #endif

    MIDL_INTERFACE("AA7A8931-80E4-4FEC-8F3B-553F87B4966E")
    IVisualTreeServiceCallback : public IUnknown {
        public:
            virtual HRESULT STDMETHODCALLTYPE OnVisualTreeChange( 
                /* [in] */ ParentChildRelation relation,
                /* [in] */ VisualElement element,
                /* [in] */ VisualMutationType mutationType) = 0;
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IVisualTreeServiceCallback_INTERFACE_DEFINED__ */

#ifndef __IVisualTreeServiceCallback2_INTERFACE_DEFINED__
#define __IVisualTreeServiceCallback2_INTERFACE_DEFINED__

/* interface IVisualTreeServiceCallback2 */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IVisualTreeServiceCallback2;
#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IVisualTreeServiceCallback2, 0xBAD9EB88, 0xAE77, 0x4397, 0xB9, 0x48, 0x5F, 0xA2, 0xDB, 0x0A, 0x19, 0xEA);
    #endif

    MIDL_INTERFACE("BAD9EB88-AE77-4397-B948-5FA2DB0A19EA")
    IVisualTreeServiceCallback2 : public IVisualTreeServiceCallback {
        public:
            virtual HRESULT STDMETHODCALLTYPE OnElementStateChanged( 
                /* [in] */ InstanceHandle element,
                /* [in] */ VisualElementState elementState,
                /* [in] */ __RPC__in LPCWSTR context) = 0;    
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IVisualTreeServiceCallback2_INTERFACE_DEFINED__ */

#ifndef __IVisualTreeService_INTERFACE_DEFINED__
#define __IVisualTreeService_INTERFACE_DEFINED__

/* interface IVisualTreeService */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IVisualTreeService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IVisualTreeService, 0xA593B11A, 0xD17F, 0x48BB, 0x8F, 0x66, 0x83, 0x91, 0x07, 0x31, 0xC8, 0xA5);
    #endif

    MIDL_INTERFACE("A593B11A-D17F-48BB-8F66-83910731C8A5")
    IVisualTreeService : public IUnknown {
        public:
            virtual HRESULT STDMETHODCALLTYPE AdviseVisualTreeChange( 
                /* [in] */ __RPC__in_opt IVisualTreeServiceCallback *pCallback) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE UnadviseVisualTreeChange( 
                /* [in] */ __RPC__in_opt IVisualTreeServiceCallback *pCallback) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetEnums( 
                /* [out] */ __RPC__out unsigned int *pCount,
                /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) EnumType **ppEnums) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
                /* [in] */ __RPC__in BSTR typeName,
                /* [in] */ __RPC__in BSTR value,
                /* [retval][out] */ __RPC__out InstanceHandle *pInstanceHandle) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetPropertyValuesChain( 
                /* [in] */ InstanceHandle instanceHandle,
                /* [out] */ __RPC__out unsigned int *pSourceCount,
                /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pSourceCount) PropertyChainSource **ppPropertySources,
                /* [out] */ __RPC__out unsigned int *pPropertyCount,
                /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pPropertyCount) PropertyChainValue **ppPropertyValues) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE SetProperty( 
                /* [in] */ InstanceHandle instanceHandle,
                /* [in] */ InstanceHandle value,
                /* [in] */ unsigned int propertyIndex) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE ClearProperty( 
                /* [in] */ InstanceHandle instanceHandle,
                /* [in] */ unsigned int propertyIndex) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetCollectionCount( 
                /* [in] */ InstanceHandle instanceHandle,
                /* [out] */ __RPC__out unsigned int *pCollectionSize) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetCollectionElements( 
                /* [in] */ InstanceHandle instanceHandle,
                /* [in] */ unsigned int startIndex,
                /* [out][in] */ __RPC__inout unsigned int *pElementCount,
                /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pElementCount) CollectionElementValue **ppElementValues) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE AddChild( 
                /* [in] */ InstanceHandle parent,
                /* [in] */ InstanceHandle child,
                /* [in] */ unsigned int index) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE RemoveChild( 
                /* [in] */ InstanceHandle parent,
                /* [in] */ unsigned int index) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE ClearChildren( 
                /* [in] */ InstanceHandle parent) = 0;
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IVisualTreeService_INTERFACE_DEFINED__ */

#ifndef __IXamlDiagnostics_INTERFACE_DEFINED__
#define __IXamlDiagnostics_INTERFACE_DEFINED__

/* interface IXamlDiagnostics */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IXamlDiagnostics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IXamlDiagnostics, 0x18C9E2B6, 0x3F43, 0x4116, 0x9F, 0x2B, 0xFF, 0x93, 0x5D, 0x77, 0x70, 0xD2);
    #endif

    MIDL_INTERFACE("18C9E2B6-3F43-4116-9F2B-FF935D7770D2")
    IXamlDiagnostics : public IUnknown {
        public:
            virtual HRESULT STDMETHODCALLTYPE GetDispatcher( 
                /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppDispatcher) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetUiLayer( 
                /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppLayer) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetApplication( 
                /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppApplication) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetIInspectableFromHandle( 
                /* [in] */ InstanceHandle instanceHandle,
                /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppInstance) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetHandleFromIInspectable( 
                /* [in] */ __RPC__in_opt IInspectable *pInstance,
                /* [retval][out] */ __RPC__out InstanceHandle *pHandle) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE HitTest( 
                /* [in] */ RECT rect,
                /* [out] */ __RPC__out unsigned int *pCount,
                /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) InstanceHandle **ppInstanceHandles) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE RegisterInstance( 
                /* [in] */ __RPC__in_opt IInspectable *pInstance,
                /* [retval][out] */ __RPC__out InstanceHandle *pInstanceHandle) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetInitializationData( 
                /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitializationData) = 0;
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IXamlDiagnostics_INTERFACE_DEFINED__ */

#ifndef __IBitmapData_INTERFACE_DEFINED__
#define __IBitmapData_INTERFACE_DEFINED__

/* interface IBitmapData */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IBitmapData;
#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IBitmapData, 0xd1a34ef2, 0xcad8, 0x4635, 0xa3, 0xd2, 0xfc, 0xda, 0x8d, 0x3f, 0x3c, 0xaf);
    #endif

    MIDL_INTERFACE("d1a34ef2-cad8-4635-a3d2-fcda8d3f3caf")
    IBitmapData : public IUnknown {
        public:
            virtual HRESULT STDMETHODCALLTYPE CopyBytesTo( 
                /* [in] */ unsigned int sourceOffsetInBytes,
                /* [in] */ unsigned int maxBytesToCopy,
                /* [size_is][out] */ __RPC__out_ecount_full(maxBytesToCopy) byte *pvBytes,
                /* [out] */ __RPC__out unsigned int *numberOfBytesCopied) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetStride( 
                /* [out] */ __RPC__out unsigned int *pStride) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetBitmapDescription( 
                /* [out] */ __RPC__out BitmapDescription *pBitmapDescription) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetSourceBitmapDescription( 
                /* [out] */ __RPC__out BitmapDescription *pBitmapDescription) = 0;
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IBitmapData_INTERFACE_DEFINED__ */

#ifndef __IVisualTreeService2_INTERFACE_DEFINED__
#define __IVisualTreeService2_INTERFACE_DEFINED__

/* interface IVisualTreeService2 */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IVisualTreeService2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IVisualTreeService2, 0x130F5136, 0xEC43, 0x4F61, 0x89, 0xC7, 0x98, 0x01, 0xA3, 0x6D, 0x2E, 0x95);
    #endif

    MIDL_INTERFACE("130F5136-EC43-4F61-89C7-9801A36D2E95")
    IVisualTreeService2 : public IVisualTreeService {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyIndex( 
            /* [in] */ InstanceHandle object,
            /* [in] */ __RPC__in LPCWSTR propertyName,
            /* [out] */ __RPC__out unsigned int *pPropertyIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ InstanceHandle object,
            /* [in] */ unsigned int propertyIndex,
            /* [out] */ __RPC__out InstanceHandle *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceResource( 
            /* [in] */ InstanceHandle resourceDictionary,
            /* [in] */ InstanceHandle key,
            /* [in] */ InstanceHandle newValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderTargetBitmap( 
            /* [in] */ InstanceHandle handle,
            /* [in] */ RenderTargetBitmapOptions options,
            /* [in] */ unsigned int maxPixelWidth,
            /* [in] */ unsigned int maxPixelHeight,
            /* [out] */ __RPC__deref_out_opt IBitmapData **ppBitmapData) = 0;
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IVisualTreeService2_INTERFACE_DEFINED__ */

#ifndef __IVisualTreeService3_INTERFACE_DEFINED__
#define __IVisualTreeService3_INTERFACE_DEFINED__

/* interface IVisualTreeService3 */
/* [unique][uuid][object] */ 

EXTERN_C const IID IID_IVisualTreeService3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IVisualTreeService3, 0x0E79C6E0, 0x85A0, 0x4BE8, 0xB4, 0x1A, 0x65, 0x5C, 0xF1, 0xFD, 0x19, 0xBD);
    #endif

    MIDL_INTERFACE("0E79C6E0-85A0-4BE8-B41A-655CF1FD19BD")
    IVisualTreeService3 : public IVisualTreeService2 {
        public:
            virtual HRESULT STDMETHODCALLTYPE ResolveResource( 
                /* [in] */ InstanceHandle resourceContext,
                /* [in] */ __RPC__in LPCWSTR resourceName,
                /* [in] */ ResourceType resourceType,
                /* [in] */ unsigned int propertyIndex) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE GetDictionaryItem( 
                /* [in] */ InstanceHandle dictionaryHandle,
                /* [in] */ __RPC__in LPCWSTR resourceName,
                /* [in] */ BOOL resourceIsImplicitStyle,
                /* [out] */ __RPC__out InstanceHandle *resourceHandle) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE AddDictionaryItem( 
                /* [in] */ InstanceHandle dictionaryHandle,
                /* [in] */ InstanceHandle resourceKey,
                /* [in] */ InstanceHandle resourceHandle) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE RemoveDictionaryItem( 
                /* [in] */ InstanceHandle dictionaryHandle,
                /* [in] */ InstanceHandle resourceKey) = 0;
    };

#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IVisualTreeService3_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_xamlom_0000_0007 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */ 
#pragma endregion

extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0007_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */
unsigned long   __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void            __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long   __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void            __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long   __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void            __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long   __RPC_USER  LPSAFEARRAY_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void            __RPC_USER  LPSAFEARRAY_UserFree64(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 
/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif
#endif

#pragma endregion  // xamlOM_h
// -------------------------------------------------------------------------------------------------------------
#pragma region windows_ui_xaml_hosting_desktopwindowxamlsource_h
/* this ALWAYS GENERATED file contains the definitions for the interfaces */

 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_h__
#define __windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
// #pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDesktopWindowXamlSourceNative_FWD_DEFINED__
#define __IDesktopWindowXamlSourceNative_FWD_DEFINED__
typedef interface IDesktopWindowXamlSourceNative IDesktopWindowXamlSourceNative;
#endif 	/* __IDesktopWindowXamlSourceNative_FWD_DEFINED__ */

#ifndef __IDesktopWindowXamlSourceNative2_FWD_DEFINED__
#define __IDesktopWindowXamlSourceNative2_FWD_DEFINED__
typedef interface IDesktopWindowXamlSourceNative2 IDesktopWindowXamlSourceNative2;
#endif 	/* __IDesktopWindowXamlSourceNative2_FWD_DEFINED__ */

/* header files for imported files */
#include <oaidl.h>

#ifdef __cplusplus
extern "C"{
#endif 

/* interface __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0000 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)

extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0000_v0_0_s_ifspec;

#ifndef __IDesktopWindowXamlSourceNative_INTERFACE_DEFINED__
#define __IDesktopWindowXamlSourceNative_INTERFACE_DEFINED__

/* interface IDesktopWindowXamlSourceNative */
/* [unique][local][uuid][object] */ 

EXTERN_C const IID IID_IDesktopWindowXamlSourceNative;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IDesktopWindowXamlSourceNative, 0x3cbcf1bf, 0x2f76, 0x4e9c, 0x96, 0xab, 0xe8, 0x4b, 0x37, 0x97, 0x25, 0x54);
    #endif

    MIDL_INTERFACE("3cbcf1bf-2f76-4e9c-96ab-e84b37972554")
    IDesktopWindowXamlSourceNative : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AttachToWindow( 
            /* [annotation][in] */ 
            _In_  HWND parentWnd) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WindowHandle( 
            /* [retval][out] */ HWND *hWnd) = 0;
        
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IDesktopWindowXamlSourceNative_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0001 */
/* [local] */ 

#endif // NTDDI_VERSION >= NTDDI_WIN10_RS5
#if (NTDDI_VERSION >= NTDDI_WIN10_19H1)

extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0001_v0_0_s_ifspec;

#ifndef __IDesktopWindowXamlSourceNative2_INTERFACE_DEFINED__
#define __IDesktopWindowXamlSourceNative2_INTERFACE_DEFINED__

/* interface IDesktopWindowXamlSourceNative2 */
/* [unique][local][uuid][object] */ 

EXTERN_C const IID IID_IDesktopWindowXamlSourceNative2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    #ifdef __CRT_UUID_DECL
    __CRT_UUID_DECL(IDesktopWindowXamlSourceNative2, 0xe3dcd8c7, 0x3057, 0x4692, 0x99, 0xc3, 0x7b, 0x77, 0x20, 0xaf, 0xda, 0x31);
    #endif

    MIDL_INTERFACE("e3dcd8c7-3057-4692-99c3-7b7720afda31")
    IDesktopWindowXamlSourceNative2 : public IDesktopWindowXamlSourceNative {
        public:
            virtual HRESULT STDMETHODCALLTYPE PreTranslateMessage( 
                /* [annotation][in] */ 
                _In_  const MSG *message,
                /* [retval][out] */ BOOL *result) = 0;
    };
    
#else 	/* C style interface */
#error Only C++ style interface is supported
#endif 	/* C style interface */
#endif 	/* __IDesktopWindowXamlSourceNative2_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0002 */
/* [local] */ 

#endif // NTDDI_VERSION >= NTDDI_WIN10_19H1

extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Edesktopwindowxamlsource_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */
/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif
#endif

#pragma endregion  // windows_ui_xaml_hosting_desktopwindowxamlsource_h
// -------------------------------------------------------------------------------------------------------------
// clang-format on
#include <atomic>
#include <vector>
#undef GetCurrentTime
#include <winrt/Windows.UI.Xaml.h>

struct ThemeTargetStyles { PCWSTR target; std::vector<PCWSTR> styles; };
struct Theme { std::vector<ThemeTargetStyles> targetStyles; };

// clang-format off
// -------------------------------------------------------------------------------------------------------------
// const PCWSTR WeatherImage = L"Background:=<ImageBrush Stretch=\"UniformToFill\" ImageSource=\"H:\\Home\\Tool\\WinMod\\TaskbarXI\\Images\\roxy0.gif\" />";

const PCWSTR TaskbarBG = L"Background:=<AcrylicBrush TintColor=\"{ThemeResource SystemAltHighColor}\" TintOpacity=\"0.6\" />";
const PCWSTR HorizontalAlignRight = L"HorizontalAlignment=Right";
const PCWSTR HorizontalAlignLeft = L"HorizontalAlignment=Left";
const PCWSTR PaddingZero = L"Padding=0";
const PCWSTR MarginZero = L"Margin=0";
const PCWSTR WidthAuto = L"Width=Auto";
const PCWSTR RoundAllCorner = L"CornerRadius=4";
const PCWSTR HideItem = L"Visibility=Collapsed";

const PCWSTR NormalHeight = L"Height=48";

const PCWSTR WeatherIconHeight = L"MaxHeight=26";
const PCWSTR WeatherIconWidth = L"MaxWidth=26";
const PCWSTR SearchBoxDisplayText = L"Text=✦ Meow";

const PCWSTR TaskbarBackgroundTransform = L"Transform3D:=<CompositeTransform3D TranslateX=\"156.5\"/>";
const PCWSTR TaskbarTransform = L"Transform3D:=<CompositeTransform3D TranslateX=\"-798\"/>";
const PCWSTR SystemtrayTransform = L"Transform3D:=<CompositeTransform3D TranslateX=\"1126.5\"/>";

const Theme themeRyoMeow = {{
    ThemeTargetStyles{L"Taskbar.TaskbarFrame#TaskbarFrame", { L"Height=56", WidthAuto, HorizontalAlignRight, TaskbarTransform }},
    ThemeTargetStyles{L"Taskbar.TaskbarFrame#TaskbarFrame > Grid", { NormalHeight, RoundAllCorner }}, // right round main section

    ThemeTargetStyles{L"Taskbar.TaskbarBackground", { L"Opacity=1", NormalHeight, TaskbarBackgroundTransform }},
    ThemeTargetStyles{L"Taskbar.TaskbarBackground > Grid", { L"Opacity=0.7", RoundAllCorner }}, // left round main section
    ThemeTargetStyles{L"Windows.UI.Xaml.Shapes.Rectangle#BackgroundStroke", { HideItem }},

    ThemeTargetStyles{L"Microsoft.UI.Xaml.Controls.ItemsRepeater", { L"Margin=0,0,3,0" }}, // main section right margin
    
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton > Taskbar.TaskListButtonPanel", { L"Margin=0,0,7,0", PaddingZero, TaskbarBG, RoundAllCorner }}, // weather section
    ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton > Taskbar.TaskListButtonPanel > Grid", { L"Margin=8,0,0,0" }}, // weather section
    // ThemeTargetStyles{L"Taskbar.AugmentedEntryPointButton > Taskbar.TaskListButtonPanel > Grid", { HideItem }}, // weather icon and text

    ThemeTargetStyles{L"Border#LargeTicker1", { L"Margin=0,2,0,0" }}, // weather icon
    ThemeTargetStyles{L"Border#LargeTicker1 > AdaptiveCards.Rendering.Uwp.WholeItemsPanel > Image", { WeatherIconHeight, WeatherIconWidth }}, // weather icon
    ThemeTargetStyles{L"Border#LargeTicker1 > AdaptiveCards.Rendering.Uwp.WholeItemsPanel > Microsoft.UI.Xaml.Controls.AnimatedVisualPlayer", { WeatherIconHeight, WeatherIconWidth }}, // weather icon
    
    ThemeTargetStyles{L"Border#LargeTicker2 > AdaptiveCards.Rendering.Uwp.WholeItemsPanel > TextBlock", { L"Margin=6,0,0,0" }}, // weather text
    // ThemeTargetStyles{L"Border#LargeTicker2 > AdaptiveCards.Rendering.Uwp.WholeItemsPanel > TextBlock", { L"Margin=0,0,6,0", HorizontalAlignRight }}, // weather text

    ThemeTargetStyles{L"Taskbar.SearchBoxButton > Taskbar.TaskListButtonPanel", { L"Margin=2,0,6,0" }},
    ThemeTargetStyles{L"Taskbar.SearchBoxButton > Taskbar.TaskListButtonPanel > TextBlock", { SearchBoxDisplayText }}, // searchbox placeholder
    
    ThemeTargetStyles{L"SystemTray.SystemTrayFrame", { HorizontalAlignLeft, SystemtrayTransform }},         // Systemtray
    ThemeTargetStyles{L"Grid#SystemTrayFrameGrid", { L"Padding=8,3,0,3", MarginZero, WidthAuto, TaskbarBG, RoundAllCorner }},

    
    ThemeTargetStyles{L"SystemTray.Stack#MainStack", { L"Grid.Column=7" }},                             // mic icon
    // ThemeTargetStyles{L"SystemTray.Stack#NonActivatableStack", { L"Grid.Column=5" }},                // lang
    // ThemeTargetStyles{L"SystemTray.Stack#SecondaryClockStack", { L"Grid.Column=9" }},                  
    // ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton", { L"Grid.Column=4" }},           // wifi/sound/battery
    // ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton", { L"Grid.Column=6" }},      // time
    // ThemeTargetStyles{L"SystemTray.Stack#ShowDesktopStack", { L"Grid.Column=8" }},                   // show desktop

    ThemeTargetStyles{L"Windows.UI.Xaml.Controls.TextBlock#InnerTextBlock[Text=\uE971]", { L"Text=\uE712"}}, // uE759-thoi uEC43-dot uECCB-largerdot uE712-dots

    ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter > SystemTray.IconView > Grid > Grid > SystemTray.TextIconContent", { HideItem }},
    
    // ThemeTargetStyles{L"SystemTray.ChevronIconView", {
    //     L"Padding=0"}},
    // ThemeTargetStyles{L"SystemTray.NotifyIconView#NotifyItemIcon", {
    //     L"Padding=0"}},

    // ThemeTargetStyles{L"SystemTray.Stack#NotifyIconStack > Grid", {
    //     TaskbarBG,
    //     RoundAllCorner,
    //     L"Padding=8,4,8,4",
    // }},
    
    // ThemeTargetStyles{L"SystemTray.Stack#MainStack > Grid", {
    //     TaskbarBG,
    //     RoundAllCorner,
    //     L"Padding=8,4,8,4",
    // }},

    // ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton", {
    //     // L"Margin=4,0,4,0",
    // }},
    // ThemeTargetStyles{L"SystemTray.OmniButton#ControlCenterButton > Grid", {
    //     TaskbarBG,
    //     RoundAllCorner,
    //     L"Padding=8,4,8,4",
    // }},  // control center

    // ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton > Grid", {
    //     TaskbarBG,
    //     RoundAllCorner,
    //     L"Padding=8,4,8,4",
    // }},

    // ThemeTargetStyles{L"SystemTray.OmniButton#NotificationCenterButton > Grid > ContentPresenter > ItemsPresenter > StackPanel > ContentPresenter > systemtray:IconView#SystemTrayIcon > Grid > Grid > SystemTray.DateTimeIconContent", {
    //     // HideItem,
    // }},

    // ThemeTargetStyles{L"SystemTray.StackListView#IconStack > ItemsPresenter > StackPanel > ContentPresenter > SystemTray.IconView#SystemTrayIcon", {
    //     L"Padding=0"}},
}};
// -------------------------------------------------------------------------------------------------------------
// clang-format on

std::atomic<DWORD> g_targetThreadId = 0;

void ApplyCustomizations(InstanceHandle handle, winrt::Windows::UI::Xaml::FrameworkElement element, PCWSTR fallbackClassName);
void CleanupCustomizations(InstanceHandle handle);

HMODULE GetCurrentModuleHandle() {
    HMODULE module;
    if (!GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, L"", &module)) return nullptr;
    return module;
}

////////////////////////////////////////////////////////////////////////////////
// clang-format off

#pragma region visualtreewatcher_hpp

#include <winrt/Windows.UI.Xaml.h>

class VisualTreeWatcher : public winrt::implements<VisualTreeWatcher, IVisualTreeServiceCallback2, winrt::non_agile> {
    public:
        VisualTreeWatcher(winrt::com_ptr<IUnknown> site);

        VisualTreeWatcher(const VisualTreeWatcher&) = delete;
        VisualTreeWatcher& operator=(const VisualTreeWatcher&) = delete;

        VisualTreeWatcher(VisualTreeWatcher&&) = delete;
        VisualTreeWatcher& operator=(VisualTreeWatcher&&) = delete;

        ~VisualTreeWatcher();

        void UnadviseVisualTreeChange();

    private:
        HRESULT STDMETHODCALLTYPE OnVisualTreeChange(ParentChildRelation relation, VisualElement element, VisualMutationType mutationType) override;
        HRESULT STDMETHODCALLTYPE OnElementStateChanged(InstanceHandle element, VisualElementState elementState, LPCWSTR context) noexcept override;

        template<typename T>
        T FromHandle(InstanceHandle handle) {
            wf::IInspectable obj;
            winrt::check_hresult(m_XamlDiagnostics->GetIInspectableFromHandle(handle, reinterpret_cast<::IInspectable**>(winrt::put_abi(obj))));

            return obj.as<T>();
        }

        winrt::com_ptr<IXamlDiagnostics> m_XamlDiagnostics = nullptr;
};

#pragma endregion  // visualtreewatcher_hpp
//////////////////////////////////////////////////////////////////////////////
#pragma region visualtreewatcher_cpp

#include <winrt/Windows.UI.Xaml.Hosting.h>

VisualTreeWatcher::VisualTreeWatcher(winrt::com_ptr<IUnknown> site) : m_XamlDiagnostics(site.as<IXamlDiagnostics>()) {
    Wh_Log(L"Constructing VisualTreeWatcher");
    winrt::check_hresult(m_XamlDiagnostics.as<IVisualTreeService3>()->AdviseVisualTreeChange(this));
}

VisualTreeWatcher::~VisualTreeWatcher() {
    Wh_Log(L"Destructing VisualTreeWatcher");
}

void VisualTreeWatcher::UnadviseVisualTreeChange() {
    Wh_Log(L"UnadviseVisualTreeChange VisualTreeWatcher");
    winrt::check_hresult(m_XamlDiagnostics.as<IVisualTreeService3>()->UnadviseVisualTreeChange(this));
}

HRESULT VisualTreeWatcher::OnVisualTreeChange(ParentChildRelation, VisualElement element, VisualMutationType mutationType) try {
    if (GetCurrentThreadId() != g_targetThreadId) return S_OK;

    switch (mutationType) {
        case Add: Wh_Log(L"Mutation type: Add"); break;
        case Remove: Wh_Log(L"Mutation type: Remove"); break;
        default: Wh_Log(L"Mutation type: %d", static_cast<int>(mutationType)); break;
    }

    Wh_Log(L"Element type: %s", element.Type);

    if (mutationType == Add) {
        const auto inspectable = FromHandle<wf::IInspectable>(element.Handle);

        auto frameworkElement = inspectable.try_as<wux::FrameworkElement>();
        if (!frameworkElement) {
            const auto desktopXamlSource = FromHandle<wuxh::DesktopWindowXamlSource>(element.Handle);
            frameworkElement = desktopXamlSource.Content().try_as<wux::FrameworkElement>();
        }

        if (frameworkElement) {
            Wh_Log(L"FrameworkElement name: %s", frameworkElement.Name().c_str());
            ApplyCustomizations(element.Handle, frameworkElement, element.Type);
        }
    }
    else if (mutationType == Remove) CleanupCustomizations(element.Handle);

    return S_OK;
} catch (...) {
    winrt::to_hresult();
    return S_OK;
}

HRESULT VisualTreeWatcher::OnElementStateChanged(InstanceHandle, VisualElementState, LPCWSTR) noexcept {
    return S_OK;
}

#pragma endregion  // visualtreewatcher_cpp
//////////////////////////////////////////////////////////////////////////////
#pragma region tap_hpp

#include <ocidl.h>

winrt::com_ptr<VisualTreeWatcher> g_visualTreeWatcher;

// {C85D8CC7-5463-40E8-A432-F5916B6427E5}
static constexpr CLSID CLSID_WindhawkTAP = { 0xc85d8cc7, 0x5463, 0x40e8, { 0xa4, 0x32, 0xf5, 0x91, 0x6b, 0x64, 0x27, 0xe5 } };

class WindhawkTAP : public winrt::implements<WindhawkTAP, IObjectWithSite, winrt::non_agile> {
    public:
        HRESULT STDMETHODCALLTYPE SetSite(IUnknown *pUnkSite) override;
        HRESULT STDMETHODCALLTYPE GetSite(REFIID riid, void **ppvSite) noexcept override;

    private:
        winrt::com_ptr<IUnknown> site;
};

#pragma endregion  // tap_hpp
//////////////////////////////////////////////////////////////////////////////
#pragma region tap_cpp

HRESULT WindhawkTAP::SetSite(IUnknown *pUnkSite) try {
    if (g_visualTreeWatcher) {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    site.copy_from(pUnkSite);

    if (site) {
        FreeLibrary(GetCurrentModuleHandle());
        g_visualTreeWatcher = winrt::make_self<VisualTreeWatcher>(site);
    }
    return S_OK;
}
catch (...) { return winrt::to_hresult(); }

HRESULT WindhawkTAP::GetSite(REFIID riid, void **ppvSite) noexcept {
    return site.as(riid, ppvSite);
}

#pragma endregion  // tap_cpp
//////////////////////////////////////////////////////////////////////////////
#pragma region simplefactory_hpp

#include <Unknwn.h>

template<class T>
struct SimpleFactory : winrt::implements<SimpleFactory<T>, IClassFactory, winrt::non_agile> {
    HRESULT STDMETHODCALLTYPE CreateInstance(IUnknown* pUnkOuter, REFIID riid, void** ppvObject) override try {
        if (!pUnkOuter) {
            *ppvObject = nullptr;
            return winrt::make<T>().as(riid, ppvObject);
        } else return CLASS_E_NOAGGREGATION;
    }
    catch (...) { return winrt::to_hresult(); }

    HRESULT STDMETHODCALLTYPE LockServer(BOOL) noexcept override { return S_OK; }
};

#pragma endregion  // simplefactory_hpp
//////////////////////////////////////////////////////////////////////////////
#pragma region module_cpp

#include <combaseapi.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdll-attribute-on-redeclaration"

__declspec(dllexport)
_Use_decl_annotations_ STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv) try {
    if (rclsid == CLSID_WindhawkTAP) {
        *ppv = nullptr;
        return winrt::make<SimpleFactory<WindhawkTAP>>().as(riid, ppv);
    } else return CLASS_E_CLASSNOTAVAILABLE;
} catch (...) {
    return winrt::to_hresult();
}

__declspec(dllexport)
_Use_decl_annotations_ STDAPI DllCanUnloadNow(void) {
    if (winrt::get_module_lock()) return S_FALSE;
    else return S_OK;
}

#pragma clang diagnostic pop

#pragma endregion  // module_cpp
//////////////////////////////////////////////////////////////////////////////
#pragma region api_cpp

using PFN_INITIALIZE_XAML_DIAGNOSTICS_EX = decltype(&InitializeXamlDiagnosticsEx);

HRESULT InjectWindhawkTAP() noexcept {
    HMODULE module = GetCurrentModuleHandle();
    if (!module) return HRESULT_FROM_WIN32(GetLastError());

    WCHAR location[MAX_PATH];
    switch (GetModuleFileName(module, location, ARRAYSIZE(location))) {
        case 0:
        case ARRAYSIZE(location):
            return HRESULT_FROM_WIN32(GetLastError());
    }

    const HMODULE wux(LoadLibraryEx(L"Windows.UI.Xaml.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32));
    if (!wux) [[unlikely]] return HRESULT_FROM_WIN32(GetLastError());

    const auto ixde = reinterpret_cast<PFN_INITIALIZE_XAML_DIAGNOSTICS_EX>(GetProcAddress(wux, "InitializeXamlDiagnosticsEx"));
    if (!ixde) [[unlikely]] return HRESULT_FROM_WIN32(GetLastError());

    const HRESULT hr2 = ixde(L"VisualDiagConnection1", GetCurrentProcessId(), nullptr, location, CLSID_WindhawkTAP, nullptr);
    if (FAILED(hr2)) [[unlikely]] return hr2;

    return S_OK;
}

#pragma endregion  // api_cpp
//////////////////////////////////////////////////////////////////////////////

// clang-format on
#include <list>
#include <optional>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <variant>
#include <vector>

#include <commctrl.h>
#include <roapi.h>
#include <winstring.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.Text.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Markup.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.h>

using namespace winrt::Windows::UI::Xaml;

using PropertyKeyValue = std::pair<DependencyProperty, winrt::Windows::Foundation::IInspectable>;
using PropertyValuesUnresolved = std::vector<std::pair<std::wstring, std::wstring>>;
using PropertyValues = std::vector<PropertyKeyValue>;
using PropertyValuesMaybeUnresolved = std::variant<PropertyValuesUnresolved, PropertyValues>;

struct ElementMatcher {
    std::wstring type;
    std::wstring name;
    std::optional<std::wstring> visualStateGroupName;
    int oneBasedIndex = 0;
    PropertyValuesMaybeUnresolved propertyValues;
};

struct StyleRule {
    std::wstring name;
    std::wstring visualState;
    std::wstring value;
    bool isXamlValue = false;
};

using PropertyOverridesUnresolved = std::vector<StyleRule>;
using PropertyOverrides = std::unordered_map<DependencyProperty, std::unordered_map<std::wstring, winrt::Windows::Foundation::IInspectable>>;
using PropertyOverridesMaybeUnresolved = std::variant<PropertyOverridesUnresolved, PropertyOverrides>;

struct ElementCustomizationRules {
    ElementMatcher elementMatcher;
    std::vector<ElementMatcher> parentElementMatchers;
    PropertyOverridesMaybeUnresolved propertyOverrides;
};

std::vector<ElementCustomizationRules> g_elementsCustomizationRules;

struct ElementPropertyCustomizationState {
    std::optional<winrt::Windows::Foundation::IInspectable> originalValue;
    std::optional<winrt::Windows::Foundation::IInspectable> customValue;
    int64_t propertyChangedToken = 0;
};

struct ElementCustomizationStateForVisualStateGroup {
    std::unordered_map<DependencyProperty, ElementPropertyCustomizationState>
        propertyCustomizationStates;
    winrt::event_token visualStateGroupCurrentStateChangedToken;
};

struct ElementCustomizationState {
    winrt::weak_ref<FrameworkElement> element;
    std::list<std::pair<std::optional<winrt::weak_ref<VisualStateGroup>>, ElementCustomizationStateForVisualStateGroup>> perVisualStateGroup;
};

std::unordered_map<InstanceHandle, ElementCustomizationState> g_elementsCustomizationState;

bool g_elementPropertyModifying;

struct BackgroundFillDelayedApplyData {
    UINT_PTR timer = 0;
    winrt::weak_ref<wux::FrameworkElement> element;
    std::wstring fallbackClassName;
};

std::unordered_map<InstanceHandle, BackgroundFillDelayedApplyData> g_backgroundFillDelayedApplyData;

winrt::Windows::Foundation::IInspectable ReadLocalValueWithWorkaround( DependencyObject elementDo, DependencyProperty property) {
    const auto value = elementDo.ReadLocalValue(property);
    if (value && winrt::get_class_name(value) == L"Windows.UI.Xaml.Data.BindingExpressionBase") return elementDo.GetAnimationBaseValue(property);
    return value;
}

void SetOrClearValue(DependencyObject elementDo, DependencyProperty property, winrt::Windows::Foundation::IInspectable value) {
    if (value == DependencyProperty::UnsetValue()) {
        elementDo.ClearValue(property);
        return;
    }

    try {
        if (property == Controls::TextBlock::FontWeightProperty()) {
            auto valueInt = value.try_as<int>();
            if (valueInt && *valueInt >= std::numeric_limits<uint16_t>::min() && *valueInt <= std::numeric_limits<uint16_t>::max()) {
                value = winrt::box_value(winrt::Windows::UI::Text::FontWeight{ static_cast<uint16_t>(*valueInt) });
            }
        }
        elementDo.SetValue(property, value);
    } catch (winrt::hresult_error const& ex) {
    }
}

std::wstring EscapeXmlAttribute(std::wstring_view data) {
    std::wstring buffer;
    buffer.reserve(data.size());
    for (size_t pos = 0; pos != data.size(); ++pos) {
        switch (data[pos]) {
            case '&':
                buffer.append(L"&amp;");
                break;
            case '\"':
                buffer.append(L"&quot;");
                break;
            // case '\'':
            //     buffer.append(L"&apos;");
            //     break;
            case '<':
                buffer.append(L"&lt;");
                break;
            case '>':
                buffer.append(L"&gt;");
                break;
            default:
                buffer.append(&data[pos], 1);
                break;
        }
    }
    return buffer;
}

std::wstring_view TrimStringView(std::wstring_view s) {
    s.remove_prefix(std::min(s.find_first_not_of(L" \t\r\v\n"), s.size()));
    s.remove_suffix(std::min(s.size() - s.find_last_not_of(L" \t\r\v\n") - 1, s.size()));
    return s;
}

std::vector<std::wstring_view> SplitStringView(std::wstring_view s, std::wstring_view delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::wstring_view token;
    std::vector<std::wstring_view> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::wstring_view::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

Style GetStyleFromXamlSetters(const std::wstring_view type, const std::wstring_view xamlStyleSetters) {
    std::wstring xaml =
        LR"(<ResourceDictionary
        xmlns="http://schemas.microsoft.com/winfx/2006/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2006/xaml"
        xmlns:d="http://schemas.microsoft.com/expression/blend/2008"
        xmlns:mc="http://schemas.openxmlformats.org/markup-compatibility/2006"
        xmlns:muxc="using:Microsoft.UI.Xaml.Controls")";

    if (auto pos = type.rfind('.'); pos != type.npos) {
        auto typeNamespace = std::wstring_view(type).substr(0, pos);
        auto typeName = std::wstring_view(type).substr(pos + 1);

        xaml += L"\n    xmlns:windhawkstyler=\"using:";
        xaml += EscapeXmlAttribute(typeNamespace);
        xaml += L"\">\n" L"    <Style TargetType=\"windhawkstyler:";
        xaml += EscapeXmlAttribute(typeName);
        xaml += L"\">\n";
    } else {
        xaml += L">\n" L"    <Style TargetType=\"";
        xaml += EscapeXmlAttribute(type);
        xaml += L"\">\n";
    }

    xaml += xamlStyleSetters;
    xaml += L"    </Style>\n" L"</ResourceDictionary>";

    auto resourceDictionary = Markup::XamlReader::Load(xaml).as<ResourceDictionary>();
    auto [styleKey, styleInspectable] = resourceDictionary.First().Current();
    return styleInspectable.as<Style>();
}

const PropertyOverrides& GetResolvedPropertyOverrides(const std::wstring_view type, PropertyOverridesMaybeUnresolved* propertyOverridesMaybeUnresolved) {
    if (const auto* resolved = std::get_if<PropertyOverrides>(propertyOverridesMaybeUnresolved)) return *resolved;

    PropertyOverrides propertyOverrides;
    try {
        const auto& styleRules = std::get<PropertyOverridesUnresolved>(*propertyOverridesMaybeUnresolved);
        if (!styleRules.empty()) {
            std::wstring xaml;

            for (const auto& rule : styleRules) {
                xaml += L"        <Setter Property=\"";
                xaml += EscapeXmlAttribute(rule.name);
                xaml += L"\"";
                if (rule.isXamlValue && rule.value.empty()) {
                    xaml += L" Value=\"{x:Null}\" />\n";
                } else if (!rule.isXamlValue) {
                    xaml += L" Value=\"";
                    xaml += EscapeXmlAttribute(rule.value);
                    xaml += L"\" />\n";
                } else {
                    xaml += L">\n" L"            <Setter.Value>\n";
                    xaml += rule.value;
                    xaml += L"\n" L"            </Setter.Value>\n" L"        </Setter>\n";
                }
            }

            auto style = GetStyleFromXamlSetters(type, xaml);

            uint32_t i = 0;
            for (const auto& rule : styleRules) {
                const auto setter = style.Setters().GetAt(i++).as<Setter>();
                propertyOverrides[setter.Property()][rule.visualState] = rule.isXamlValue && rule.value.empty() ? DependencyProperty::UnsetValue() : setter.Value();
            }
        }
    } catch (winrt::hresult_error const& ex) {
    } catch (std::exception const& ex) {
    }

    *propertyOverridesMaybeUnresolved = std::move(propertyOverrides);
    return std::get<PropertyOverrides>(*propertyOverridesMaybeUnresolved);
}

const PropertyValues& GetResolvedPropertyValues( const std::wstring_view type, PropertyValuesMaybeUnresolved* propertyValuesMaybeUnresolved) {
    if (const auto* resolved = std::get_if<PropertyValues>(propertyValuesMaybeUnresolved)) return *resolved;

    PropertyValues propertyValues;
    try {
        const auto& propertyValuesStr = std::get<PropertyValuesUnresolved>(*propertyValuesMaybeUnresolved);
        if (!propertyValuesStr.empty()) {
            std::wstring xaml;

            for (const auto& [property, value] : propertyValuesStr) {
                xaml += L"        <Setter Property=\"";
                xaml += EscapeXmlAttribute(property);
                xaml += L"\" Value=\"";
                xaml += EscapeXmlAttribute(value);
                xaml += L"\" />\n";
            }

            auto style = GetStyleFromXamlSetters(type, xaml);

            for (size_t i = 0; i < propertyValuesStr.size(); i++) {
                const auto setter = style.Setters().GetAt(i).as<Setter>();
                propertyValues.push_back({
                    setter.Property(),
                    setter.Value(),
                });
            }
        }
    } catch (winrt::hresult_error const& ex) {
    } catch (std::exception const& ex) {
    }

    *propertyValuesMaybeUnresolved = std::move(propertyValues);
    return std::get<PropertyValues>(*propertyValuesMaybeUnresolved);
}

VisualStateGroup GetVisualStateGroup(FrameworkElement element, std::wstring_view visualStateGroupName) {
    if (winrt::get_class_name(element) == L"Taskbar.TaskListButtonPanel" && element.Name() == L"ExperienceToggleButtonRootPanel") {
        auto parent = Media::VisualTreeHelper::GetParent(element).try_as<FrameworkElement>();
        if (parent && winrt::get_class_name(parent) == L"Taskbar.SearchBoxLaunchListButton" && parent.Name() == L"SearchBoxLaunchListButton") return nullptr;
    }

    auto list = VisualStateManager::GetVisualStateGroups(element);

    for (const auto& v : list) if (v.Name() == visualStateGroupName) return v;
    return nullptr;
}


bool TestElementMatcher(FrameworkElement element, ElementMatcher& matcher, VisualStateGroup* visualStateGroup, PCWSTR fallbackClassName) {
    if (!matcher.type.empty() && matcher.type != winrt::get_class_name(element) && (!fallbackClassName || matcher.type != fallbackClassName)) return false;
    if (!matcher.name.empty() && matcher.name != element.Name()) return false;

    if (matcher.oneBasedIndex) {
        auto parent = Media::VisualTreeHelper::GetParent(element);
        if (!parent) return false;

        int index = matcher.oneBasedIndex - 1;
        if (index < 0 || index >= Media::VisualTreeHelper::GetChildrenCount(parent) || Media::VisualTreeHelper::GetChild(parent, index) != element) return false;
    }

    auto elementDo = element.as<DependencyObject>();

    for (const auto& propertyValue : GetResolvedPropertyValues(matcher.type, &matcher.propertyValues)) {
        const auto value = ReadLocalValueWithWorkaround(elementDo, propertyValue.first);
        if (!value) return false;

        const auto className = winrt::get_class_name(value);
        const auto expectedClassName = winrt::get_class_name(propertyValue.second);
        if (className != expectedClassName) return false;

        if (className == L"Windows.Foundation.IReference`1<String>") {
            if (winrt::unbox_value<winrt::hstring>(propertyValue.second) == winrt::unbox_value<winrt::hstring>(value)) continue;
            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<Double>") {
            if (winrt::unbox_value<double>(propertyValue.second) == winrt::unbox_value<double>(value)) continue;
            return false;
        }

        if (className == L"Windows.Foundation.IReference`1<Boolean>") {
            if (winrt::unbox_value<bool>(propertyValue.second) == winrt::unbox_value<bool>(value)) continue;
            return false;
        }
        return false;
    }
    
    if (matcher.visualStateGroupName && visualStateGroup) *visualStateGroup = GetVisualStateGroup(element, *matcher.visualStateGroupName);
    return true;
}

std::unordered_map<VisualStateGroup, PropertyOverrides> FindElementPropertyOverrides(FrameworkElement element, PCWSTR fallbackClassName) {
    std::unordered_map<VisualStateGroup, PropertyOverrides> overrides;
    std::unordered_set<DependencyProperty> propertiesAdded;

    for (auto it = g_elementsCustomizationRules.rbegin(); it != g_elementsCustomizationRules.rend(); ++it) {
        auto& override = *it;
        VisualStateGroup visualStateGroup = nullptr;

        if (!TestElementMatcher(element, override.elementMatcher, &visualStateGroup, fallbackClassName)) continue;

        auto parentElementIter = element;
        bool parentElementMatchFailed = false;

        for (auto& matcher : override.parentElementMatchers) {
            parentElementIter = Media::VisualTreeHelper::GetParent(parentElementIter).try_as<FrameworkElement>();
            if (!parentElementIter) {
                parentElementMatchFailed = true;
                break;
            }

            if (!TestElementMatcher(parentElementIter, matcher, &visualStateGroup, nullptr)) {
                parentElementMatchFailed = true;
                break;
            }
        }

        if (parentElementMatchFailed) continue;

        auto& overridesForVisualStateGroup = overrides[visualStateGroup];
        for (const auto& [property, valuesPerVisualState] : GetResolvedPropertyOverrides(override.elementMatcher.type, &override.propertyOverrides)) {
            bool propertyInserted = propertiesAdded.insert(property).second;
            if (!propertyInserted) continue;

            auto& propertyOverrides = overridesForVisualStateGroup[property];
            for (const auto& [visualState, value] : valuesPerVisualState) propertyOverrides.insert({visualState, value});
        }
    }

    std::erase_if(overrides, [](const auto& item) { return item.second.empty(); });
    return overrides;
}

void ApplyCustomizationsForVisualStateGroup(FrameworkElement element, VisualStateGroup visualStateGroup, PropertyOverrides propertyOverrides, ElementCustomizationStateForVisualStateGroup* ECSFVSG) {
    auto elementDo = element.as<DependencyObject>();

    VisualState currentVisualState(visualStateGroup ? visualStateGroup.CurrentState() : nullptr);
    std::wstring currentVisualStateName(currentVisualState ? currentVisualState.Name() : L"");

    for (const auto& [property, valuesPerVisualState] : propertyOverrides) {
        const auto [propertyCustomizationStatesIt, inserted] = ECSFVSG->propertyCustomizationStates.insert({property, {}});
        if (!inserted) continue;

        auto& propertyCustomizationState = propertyCustomizationStatesIt->second;

        auto it = valuesPerVisualState.find(currentVisualStateName);
        if (it == valuesPerVisualState.end() && !currentVisualStateName.empty()) it = valuesPerVisualState.find(L"");

        if (it != valuesPerVisualState.end()) {
            propertyCustomizationState.originalValue = ReadLocalValueWithWorkaround(element, property);
            propertyCustomizationState.customValue = it->second;
            SetOrClearValue(element, property, it->second);
        }

        propertyCustomizationState.propertyChangedToken = elementDo.RegisterPropertyChangedCallback(property, [&propertyCustomizationState](DependencyObject sender, DependencyProperty property) {
            if (g_elementPropertyModifying) return;

            auto element = sender.try_as<FrameworkElement>();
            if (!element) return;
            if (!propertyCustomizationState.customValue) return;

            auto localValue = ReadLocalValueWithWorkaround(element, property);

            if (*propertyCustomizationState.customValue != localValue) propertyCustomizationState.originalValue = localValue;

            g_elementPropertyModifying = true;
            SetOrClearValue(element, property, *propertyCustomizationState.customValue);
            g_elementPropertyModifying = false;
        });
    }

    if (visualStateGroup) {
        winrt::weak_ref<FrameworkElement> elementWeakRef = element;
        ECSFVSG->visualStateGroupCurrentStateChangedToken = visualStateGroup.CurrentStateChanged([elementWeakRef, propertyOverrides, ECSFVSG](winrt::Windows::Foundation::IInspectable const& sender, VisualStateChangedEventArgs const& e) {
            auto element = elementWeakRef.get();
            if (!element) return;

            g_elementPropertyModifying = true;

            auto& propertyCustomizationStates = ECSFVSG->propertyCustomizationStates;

            for (const auto& [property, valuesPerVisualState] : propertyOverrides) {
                auto& propertyCustomizationState = propertyCustomizationStates.at(property);

                auto newState = e.NewState();
                auto newStateName = std::wstring{newState ? newState.Name() : L""};
                auto it = valuesPerVisualState.find(newStateName);
                if (it == valuesPerVisualState.end()) {
                    it = valuesPerVisualState.find(L"");
                    if (it != valuesPerVisualState.end()) {
                        auto oldState = e.OldState();
                        auto oldStateName = std::wstring{oldState ? oldState.Name() : L""};
                        if (!valuesPerVisualState.contains(oldStateName)) continue;
                    }
                }

                if (it != valuesPerVisualState.end()) {
                    if (!propertyCustomizationState.originalValue) propertyCustomizationState.originalValue = ReadLocalValueWithWorkaround(element, property);

                    propertyCustomizationState.customValue = it->second;
                    SetOrClearValue(element, property, it->second);
                } else {
                    if (propertyCustomizationState.originalValue) {
                        SetOrClearValue(element, property, *propertyCustomizationState.originalValue);
                        propertyCustomizationState.originalValue.reset();
                    }

                    propertyCustomizationState.customValue.reset();
                }
            }

            g_elementPropertyModifying = false;
        });
    }
}

void RestoreCustomizationsForVisualStateGroup(FrameworkElement element, std::optional<winrt::weak_ref<VisualStateGroup>> VSGOptionalWeakPtr, const ElementCustomizationStateForVisualStateGroup& ECSFVSG) {
    if (element) {
        for (const auto& [property, state] : ECSFVSG.propertyCustomizationStates) {
            element.UnregisterPropertyChangedCallback(property, state.propertyChangedToken);
            if (state.originalValue) SetOrClearValue(element, property, *state.originalValue);
        }
    }

    auto visualStateGroupIter = VSGOptionalWeakPtr ? VSGOptionalWeakPtr->get() : nullptr;
    if (visualStateGroupIter && ECSFVSG.visualStateGroupCurrentStateChangedToken) {
        visualStateGroupIter.CurrentStateChanged(ECSFVSG.visualStateGroupCurrentStateChangedToken);
    }
}

void ApplyCustomizations(InstanceHandle handle, FrameworkElement element, PCWSTR fallbackClassName) {
    auto overrides = FindElementPropertyOverrides(element, fallbackClassName);
    if (overrides.empty()) return;

    auto& elementCustomizationState = g_elementsCustomizationState[handle];

    for (const auto& [visualStateGroupOptionalWeakPtrIter, stateIter] : elementCustomizationState.perVisualStateGroup) {
        RestoreCustomizationsForVisualStateGroup(element, visualStateGroupOptionalWeakPtrIter, stateIter);
    }

    elementCustomizationState.element = element;
    elementCustomizationState.perVisualStateGroup.clear();

    for (auto& [visualStateGroup, overridesForVisualStateGroup] : overrides) {
        std::optional<winrt::weak_ref<VisualStateGroup>> visualStateGroupOptionalWeakPtr;
        if (visualStateGroup) visualStateGroupOptionalWeakPtr = visualStateGroup;

        elementCustomizationState.perVisualStateGroup.push_back({visualStateGroupOptionalWeakPtr, {}});
        auto* ECSFVSG = &elementCustomizationState.perVisualStateGroup.back().second;

        ApplyCustomizationsForVisualStateGroup(element, visualStateGroup, std::move(overridesForVisualStateGroup), ECSFVSG);
    }
}

void CleanupCustomizations(InstanceHandle handle) {
    if (auto it = g_backgroundFillDelayedApplyData.find(handle); it != g_backgroundFillDelayedApplyData.end()) {
        KillTimer(nullptr, it->second.timer);
        g_backgroundFillDelayedApplyData.erase(it);
    }

    auto it = g_elementsCustomizationState.find(handle);
    if (it == g_elementsCustomizationState.end()) return;

    auto& elementCustomizationState = it->second;
    auto element = elementCustomizationState.element.get();

    for (const auto& [visualStateGroupOptionalWeakPtrIter, stateIter] : elementCustomizationState.perVisualStateGroup) {
        RestoreCustomizationsForVisualStateGroup(element, visualStateGroupOptionalWeakPtrIter, stateIter);
    }

    g_elementsCustomizationState.erase(it);
}

ElementMatcher ElementMatcherFromString(std::wstring_view str) {
    ElementMatcher result;
    PropertyValuesUnresolved propertyValuesUnresolved;

    auto i = str.find_first_of(L"#@[");
    result.type = TrimStringView(str.substr(0, i));

    while (i != str.npos) {
        auto iNext = str.find_first_of(L"#@[", i + 1);
        auto nextPart = str.substr(i + 1, iNext == str.npos ? str.npos : iNext - (i + 1));

        switch (str[i]) {
            case L'#':
                result.name = TrimStringView(nextPart);
                break;

            case L'@':
                result.visualStateGroupName = TrimStringView(nextPart);
                break;

            case L'[': {
                auto rule = TrimStringView(nextPart);
                rule = TrimStringView(rule.substr(0, rule.length() - 1));

                if (rule.find_first_not_of(L"0123456789") == rule.npos) {
                    result.oneBasedIndex = std::stoi(std::wstring(rule));
                    break;
                }

                auto ruleEqPos = rule.find(L'=');
                auto ruleKey = TrimStringView(rule.substr(0, ruleEqPos));
                auto ruleVal = TrimStringView(rule.substr(ruleEqPos + 1));

                propertyValuesUnresolved.push_back({std::wstring(ruleKey), std::wstring(ruleVal)});
                break;
            }
        }
        i = iNext;
    }

    result.propertyValues = std::move(propertyValuesUnresolved);
    return result;
}


StyleRule StyleRuleFromString(std::wstring_view str) {
    StyleRule result;

    auto eqPos = str.find(L'=');
    auto name = str.substr(0, eqPos);
    auto value = str.substr(eqPos + 1);

    result.value = TrimStringView(value);

    if (name.size() > 0 && name.back() == L':') {
        result.isXamlValue = true;
        name = name.substr(0, name.size() - 1);
    }

    auto atPos = name.find(L'@');
    if (atPos != name.npos) {
        result.visualState = TrimStringView(name.substr(atPos + 1));
        name = name.substr(0, atPos);
    }

    result.name = TrimStringView(name);
    return result;
}

std::wstring AdjustTypeName(std::wstring_view type) {
    if (type.find_first_of(L".:") == type.npos) return L"Windows.UI.Xaml.Controls." + std::wstring{type};
    return std::wstring{type};
}

void AddElementCustomizationRules(std::wstring_view target, std::vector<std::wstring> styles) {
    ElementCustomizationRules elementCustomizationRules;
    auto targetParts = SplitStringView(target, L" > ");
    
    bool first = true;
    bool hasVisualStateGroup = false;
    for (auto i = targetParts.rbegin(); i != targetParts.rend(); ++i) {
        const auto& targetPart = *i;

        auto matcher = ElementMatcherFromString(targetPart);
        matcher.type = AdjustTypeName(matcher.type);

        if (matcher.visualStateGroupName) {
            if (hasVisualStateGroup) throw std::runtime_error("Element type can't have more than one visual state group");
            hasVisualStateGroup = true;
        }

        if (first) {
            std::vector<StyleRule> styleRules;
            for (const auto& style : styles) styleRules.push_back(StyleRuleFromString(style));

            elementCustomizationRules.elementMatcher = std::move(matcher);
            elementCustomizationRules.propertyOverrides = std::move(styleRules);
        } else elementCustomizationRules.parentElementMatchers.push_back(std::move(matcher));

        first = false;
    }

    g_elementsCustomizationRules.push_back(std::move(elementCustomizationRules));
}

void ProcessAllStylesFromTheme() {
    const Theme* theme = &themeRyoMeow;

    for (const auto& themeTargetStyle : theme->targetStyles) {
        try {
            std::vector<std::wstring> styles { themeTargetStyle.styles.begin(), themeTargetStyle.styles.end() };
            AddElementCustomizationRules(themeTargetStyle.target, std::move(styles));
        } catch (winrt::hresult_error const& ex) {
        } catch (std::exception const& ex) {
        }
    }
}

void InitializeSettingsAndTap() {
    DWORD kNoThreadId = 0;
    if (!g_targetThreadId.compare_exchange_strong(kNoThreadId, GetCurrentThreadId())) return;

    ProcessAllStylesFromTheme();
    InjectWindhawkTAP();
}

void UninitializeSettingsAndTap() {
    for (auto& [handle, data] : g_backgroundFillDelayedApplyData) KillTimer(nullptr, data.timer);
    g_backgroundFillDelayedApplyData.clear();

    for (const auto& [handle, elementCustomizationState] : g_elementsCustomizationState) {
        auto element = elementCustomizationState.element.get();

        for (const auto& [visualStateGroupOptionalWeakPtrIter, stateIter] : elementCustomizationState.perVisualStateGroup) {
            RestoreCustomizationsForVisualStateGroup(element, visualStateGroupOptionalWeakPtrIter, stateIter);
        }
    }

    g_elementsCustomizationState.clear();
    g_elementsCustomizationRules.clear();
    g_targetThreadId = 0;
}

using CreateWindowExW_t = decltype(&CreateWindowExW);
CreateWindowExW_t CreateWindowExW_Original;
HWND WINAPI CreateWindowExW_Hook(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, PVOID lpParam) {
    HWND hWnd = CreateWindowExW_Original(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
    if (!hWnd) return hWnd;

    WCHAR className[64];
    if (!g_targetThreadId && hWndParent && GetClassName(hWnd, className, ARRAYSIZE(className)) &&
        _wcsicmp(className, L"Windows.UI.Composition.DesktopWindowContentBridge") == 0 &&
        GetClassName(hWndParent, className, ARRAYSIZE(className)) &&
        _wcsicmp(className, L"Shell_TrayWnd") == 0) {
        InitializeSettingsAndTap();
    }

    return hWnd;
}

using RunFromWindowThreadProc_t = void(WINAPI*)(PVOID parameter);
bool RunFromWindowThread(HWND hWnd, RunFromWindowThreadProc_t proc, PVOID procParam) {
    static const UINT runFromWindowThreadRegisteredMsg = RegisterWindowMessage(L"Ryo_RunFromWindowThread_" WH_MOD_ID);

    struct RUN_FROM_WINDOW_THREAD_PARAM {
        RunFromWindowThreadProc_t proc;
        PVOID procParam;
    };

    DWORD dwThreadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (dwThreadId == 0) return false;

    if (dwThreadId == GetCurrentThreadId()) {
        proc(procParam);
        return true;
    }

    HHOOK hook = SetWindowsHookEx(WH_CALLWNDPROC, [](int nCode, WPARAM wParam, LPARAM lParam) WINAPI -> LRESULT {
        if (nCode == HC_ACTION) {
            const CWPSTRUCT* cwp = (const CWPSTRUCT*)lParam;
            if (cwp->message == runFromWindowThreadRegisteredMsg) {
                RUN_FROM_WINDOW_THREAD_PARAM* param = (RUN_FROM_WINDOW_THREAD_PARAM*)cwp->lParam;
                param->proc(param->procParam);
            }
        }
        return CallNextHookEx(nullptr, nCode, wParam, lParam);
    }, nullptr, dwThreadId);

    if (!hook) return false;

    RUN_FROM_WINDOW_THREAD_PARAM param = {proc, procParam};
    SendMessage(hWnd, runFromWindowThreadRegisteredMsg, 0, (LPARAM)&param);
    UnhookWindowsHookEx(hook);

    return true;
}

HWND GetTaskbarUiWnd() {
    DWORD dwProcessId; DWORD dwCurrentProcessId = GetCurrentProcessId();

    HWND hTaskbarWnd = FindWindow(L"Shell_TrayWnd", nullptr);
    if (!hTaskbarWnd || !GetWindowThreadProcessId(hTaskbarWnd, &dwProcessId) || dwProcessId != dwCurrentProcessId) return nullptr;

    return FindWindowEx(hTaskbarWnd, nullptr, L"Windows.UI.Composition.DesktopWindowContentBridge", nullptr);
}

BOOL Wh_ModInit() {
    Wh_Log(L">");
    Wh_SetFunctionHook((void*)CreateWindowExW, (void*)CreateWindowExW_Hook, (void**)&CreateWindowExW_Original);
    return TRUE;
}

void Wh_ModAfterInit() {
    Wh_Log(L">");
    HWND hTaskbarUiWnd = GetTaskbarUiWnd();
    if (hTaskbarUiWnd) RunFromWindowThread(hTaskbarUiWnd, [](PVOID) WINAPI { InitializeSettingsAndTap(); }, nullptr);
}

void Wh_ModUninit() {
    Wh_Log(L">");
    if (g_visualTreeWatcher) {
        g_visualTreeWatcher->UnadviseVisualTreeChange();
        g_visualTreeWatcher = nullptr;
    }

    HWND hTaskbarUiWnd = GetTaskbarUiWnd();
    if (hTaskbarUiWnd) RunFromWindowThread(hTaskbarUiWnd, [](PVOID) WINAPI { UninitializeSettingsAndTap(); }, nullptr);
}
