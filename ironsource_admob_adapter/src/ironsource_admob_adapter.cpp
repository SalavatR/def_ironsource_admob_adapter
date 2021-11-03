#define LIB_NAME "IronsourceAdmobAdapter"
#define MODULE_NAME "ironsource_admob_adapter"

#include <dmsdk/sdk.h>

static void LuaInit(lua_State* L){}

dmExtension::Result AppInitializeIronsourceAdmobAdapter(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result InitializeIronsourceAdmobAdapter(dmExtension::Params* params){LuaInit(params->m_L);return dmExtension::RESULT_OK;}
dmExtension::Result AppFinalizeIronsourceAdmobAdapter(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result FinalizeIronsourceAdmobAdapter(dmExtension::Params* params){return dmExtension::RESULT_OK;}
dmExtension::Result OnUpdateIronsourceAdmobAdapter(dmExtension::Params* params){return dmExtension::RESULT_OK;}
void OnEventIronsourceAdmobAdapter(dmExtension::Params* params, const dmExtension::Event* event){}

DM_DECLARE_EXTENSION(IronsourceAdmobAdapter,
LIB_NAME,
AppInitializeIronsourceAdmobAdapter,
AppFinalizeIronsourceAdmobAdapter,
InitializeIronsourceAdmobAdapter,
OnUpdateIronsourceAdmobAdapter,
OnEventIronsourceAdmobAdapter,
FinalizeIronsourceAdmobAdapter)