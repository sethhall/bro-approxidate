
#include "Plugin.h"

namespace plugin { namespace Bro_approxidate { Plugin plugin; } }

using namespace plugin::Bro_approxidate;

plugin::Configuration Plugin::Configure()
	{
	plugin::Configuration config;
	config.name = "Bro::approxidate";
	config.description = "<Insert description>";
	config.version.major = 1;
	config.version.minor = 0;
	return config;
	}
