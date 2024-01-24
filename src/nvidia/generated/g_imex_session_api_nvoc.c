#define NVOC_IMEX_SESSION_API_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_imex_session_api_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0xb4748b = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_ImexSessionApi;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

void __nvoc_init_ImexSessionApi(ImexSessionApi*);
void __nvoc_init_funcTable_ImexSessionApi(ImexSessionApi*);
NV_STATUS __nvoc_ctor_ImexSessionApi(ImexSessionApi*, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_ImexSessionApi(ImexSessionApi*);
void __nvoc_dtor_ImexSessionApi(ImexSessionApi*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_ImexSessionApi;

static const struct NVOC_RTTI __nvoc_rtti_ImexSessionApi_ImexSessionApi = {
    /*pClassDef=*/          &__nvoc_class_def_ImexSessionApi,
    /*dtor=*/               (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_ImexSessionApi,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_ImexSessionApi_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ImexSessionApi, __nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_ImexSessionApi_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ImexSessionApi, __nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_ImexSessionApi_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ImexSessionApi, __nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_ImexSessionApi_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(ImexSessionApi, __nvoc_base_RmResource),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_ImexSessionApi = {
    /*numRelatives=*/       5,
    /*relatives=*/ {
        &__nvoc_rtti_ImexSessionApi_ImexSessionApi,
        &__nvoc_rtti_ImexSessionApi_RmResource,
        &__nvoc_rtti_ImexSessionApi_RmResourceCommon,
        &__nvoc_rtti_ImexSessionApi_RsResource,
        &__nvoc_rtti_ImexSessionApi_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_ImexSessionApi = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(ImexSessionApi),
        /*classId=*/            classId(ImexSessionApi),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "ImexSessionApi",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_ImexSessionApi,
    /*pCastInfo=*/          &__nvoc_castinfo_ImexSessionApi,
    /*pExportInfo=*/        &__nvoc_export_info_ImexSessionApi
};

static NvBool __nvoc_thunk_RmResource_imexsessionapiShareCallback(struct ImexSessionApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pInvokingClient, pParentRef, pSharePolicy);
}

static NV_STATUS __nvoc_thunk_RmResource_imexsessionapiCheckMemInterUnmap(struct ImexSessionApi *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), bSubdeviceHandleProvided);
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiControl(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControl((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RmResource_imexsessionapiGetMemInterMapParams(struct ImexSessionApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_RmResource_imexsessionapiGetMemoryMappingDescriptor(struct ImexSessionApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), ppMemDesc);
}

static NvU32 __nvoc_thunk_RsResource_imexsessionapiGetRefCount(struct ImexSessionApi *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiControlFilter(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pCallContext, pParams);
}

static void __nvoc_thunk_RsResource_imexsessionapiAddAdditionalDependants(struct RsClient *pClient, struct ImexSessionApi *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pReference);
}

static NV_STATUS __nvoc_thunk_RmResource_imexsessionapiControlSerialization_Prologue(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RmResource_imexsessionapiControl_Prologue(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pCallContext, pParams);
}

static NvBool __nvoc_thunk_RsResource_imexsessionapiCanCopy(struct ImexSessionApi *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiUnmap(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pCallContext, pCpuMapping);
}

static NvBool __nvoc_thunk_RsResource_imexsessionapiIsPartialUnmapSupported(struct ImexSessionApi *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset));
}

static void __nvoc_thunk_RsResource_imexsessionapiPreDestruct(struct ImexSessionApi *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiMapTo(struct ImexSessionApi *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiIsDuplicate(struct ImexSessionApi *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), hMemory, pDuplicate);
}

static void __nvoc_thunk_RmResource_imexsessionapiControlSerialization_Epilogue(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pCallContext, pParams);
}

static void __nvoc_thunk_RmResource_imexsessionapiControl_Epilogue(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiUnmapFrom(struct ImexSessionApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_imexsessionapiMap(struct ImexSessionApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RsResource.offset), pCallContext, pParams, pCpuMapping);
}

static NvBool __nvoc_thunk_RmResource_imexsessionapiAccessCallback(struct ImexSessionApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_ImexSessionApi_RmResource.offset), pInvokingClient, pAllocParams, accessRight);
}

#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_ImexSessionApi[] = 
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) imexsessionapiCtrlCmdGetFabricEvents_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xf10001u,
        /*paramSize=*/  sizeof(NV00F1_CTRL_GET_FABRIC_EVENTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ImexSessionApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "imexsessionapiCtrlCmdGetFabricEvents"
#endif
    },
    {               /*  [1] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) imexsessionapiCtrlCmdFinishMemUnimport_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xf10002u,
        /*paramSize=*/  sizeof(NV00F1_CTRL_FINISH_MEM_UNIMPORT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ImexSessionApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "imexsessionapiCtrlCmdFinishMemUnimport"
#endif
    },
    {               /*  [2] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) imexsessionapiCtrlCmdDisableImporters_IMPL,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xf10003u,
        /*paramSize=*/  sizeof(NV00F1_CTRL_DISABLE_IMPORTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_ImexSessionApi.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "imexsessionapiCtrlCmdDisableImporters"
#endif
    },

};

const struct NVOC_EXPORT_INFO __nvoc_export_info_ImexSessionApi = 
{
    /*numEntries=*/     3,
    /*pExportEntries=*/ __nvoc_exported_method_def_ImexSessionApi
};

void __nvoc_dtor_RmResource(RmResource*);
void __nvoc_dtor_ImexSessionApi(ImexSessionApi *pThis) {
    __nvoc_imexsessionapiDestruct(pThis);
    __nvoc_dtor_RmResource(&pThis->__nvoc_base_RmResource);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_ImexSessionApi(ImexSessionApi *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_RmResource(RmResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_ImexSessionApi(ImexSessionApi *pThis, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_RmResource(&pThis->__nvoc_base_RmResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_ImexSessionApi_fail_RmResource;
    __nvoc_init_dataField_ImexSessionApi(pThis);

    status = __nvoc_imexsessionapiConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_ImexSessionApi_fail__init;
    goto __nvoc_ctor_ImexSessionApi_exit; // Success

__nvoc_ctor_ImexSessionApi_fail__init:
    __nvoc_dtor_RmResource(&pThis->__nvoc_base_RmResource);
__nvoc_ctor_ImexSessionApi_fail_RmResource:
__nvoc_ctor_ImexSessionApi_exit:

    return status;
}

static void __nvoc_init_funcTable_ImexSessionApi_1(ImexSessionApi *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__imexsessionapiCtrlCmdGetFabricEvents__ = &imexsessionapiCtrlCmdGetFabricEvents_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__imexsessionapiCtrlCmdFinishMemUnimport__ = &imexsessionapiCtrlCmdFinishMemUnimport_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__imexsessionapiCtrlCmdDisableImporters__ = &imexsessionapiCtrlCmdDisableImporters_IMPL;
#endif

    pThis->__imexsessionapiShareCallback__ = &__nvoc_thunk_RmResource_imexsessionapiShareCallback;

    pThis->__imexsessionapiCheckMemInterUnmap__ = &__nvoc_thunk_RmResource_imexsessionapiCheckMemInterUnmap;

    pThis->__imexsessionapiControl__ = &__nvoc_thunk_RsResource_imexsessionapiControl;

    pThis->__imexsessionapiGetMemInterMapParams__ = &__nvoc_thunk_RmResource_imexsessionapiGetMemInterMapParams;

    pThis->__imexsessionapiGetMemoryMappingDescriptor__ = &__nvoc_thunk_RmResource_imexsessionapiGetMemoryMappingDescriptor;

    pThis->__imexsessionapiGetRefCount__ = &__nvoc_thunk_RsResource_imexsessionapiGetRefCount;

    pThis->__imexsessionapiControlFilter__ = &__nvoc_thunk_RsResource_imexsessionapiControlFilter;

    pThis->__imexsessionapiAddAdditionalDependants__ = &__nvoc_thunk_RsResource_imexsessionapiAddAdditionalDependants;

    pThis->__imexsessionapiControlSerialization_Prologue__ = &__nvoc_thunk_RmResource_imexsessionapiControlSerialization_Prologue;

    pThis->__imexsessionapiControl_Prologue__ = &__nvoc_thunk_RmResource_imexsessionapiControl_Prologue;

    pThis->__imexsessionapiCanCopy__ = &__nvoc_thunk_RsResource_imexsessionapiCanCopy;

    pThis->__imexsessionapiUnmap__ = &__nvoc_thunk_RsResource_imexsessionapiUnmap;

    pThis->__imexsessionapiIsPartialUnmapSupported__ = &__nvoc_thunk_RsResource_imexsessionapiIsPartialUnmapSupported;

    pThis->__imexsessionapiPreDestruct__ = &__nvoc_thunk_RsResource_imexsessionapiPreDestruct;

    pThis->__imexsessionapiMapTo__ = &__nvoc_thunk_RsResource_imexsessionapiMapTo;

    pThis->__imexsessionapiIsDuplicate__ = &__nvoc_thunk_RsResource_imexsessionapiIsDuplicate;

    pThis->__imexsessionapiControlSerialization_Epilogue__ = &__nvoc_thunk_RmResource_imexsessionapiControlSerialization_Epilogue;

    pThis->__imexsessionapiControl_Epilogue__ = &__nvoc_thunk_RmResource_imexsessionapiControl_Epilogue;

    pThis->__imexsessionapiUnmapFrom__ = &__nvoc_thunk_RsResource_imexsessionapiUnmapFrom;

    pThis->__imexsessionapiMap__ = &__nvoc_thunk_RsResource_imexsessionapiMap;

    pThis->__imexsessionapiAccessCallback__ = &__nvoc_thunk_RmResource_imexsessionapiAccessCallback;
}

void __nvoc_init_funcTable_ImexSessionApi(ImexSessionApi *pThis) {
    __nvoc_init_funcTable_ImexSessionApi_1(pThis);
}

void __nvoc_init_RmResource(RmResource*);
void __nvoc_init_ImexSessionApi(ImexSessionApi *pThis) {
    pThis->__nvoc_pbase_ImexSessionApi = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_RmResource;
    __nvoc_init_RmResource(&pThis->__nvoc_base_RmResource);
    __nvoc_init_funcTable_ImexSessionApi(pThis);
}

NV_STATUS __nvoc_objCreate_ImexSessionApi(ImexSessionApi **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    ImexSessionApi *pThis;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(ImexSessionApi), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(ImexSessionApi));

    // Initialize runtime type information.
    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_ImexSessionApi);

    pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_ImexSessionApi(pThis);
    status = __nvoc_ctor_ImexSessionApi(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_ImexSessionApi_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_ImexSessionApi_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(ImexSessionApi));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_ImexSessionApi(ImexSessionApi **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_ImexSessionApi(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}

