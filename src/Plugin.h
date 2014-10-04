
#ifndef BRO_PLUGIN_BRO_APPROXIDATE
#define BRO_PLUGIN_BRO_APPROXIDATE

#include <plugin/Plugin.h>

namespace plugin {
namespace Bro_approxidate {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	virtual plugin::Configuration Configure();
};

extern Plugin plugin;

}
}

#endif
