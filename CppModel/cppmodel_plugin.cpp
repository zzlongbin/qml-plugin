#include "cppmodel_plugin.h"

#include "cppmodel.h"

#include <qqml.h>

void CppModelPlugin::registerTypes(const char *uri)
{
    // @uri com.zzll
    qmlRegisterType<CppModel>(uri, 1, 0, "CppModel");
}
