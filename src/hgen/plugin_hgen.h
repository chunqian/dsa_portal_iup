#ifndef PLUGIN_UI_HGEN_H
#define PLUGIN_UI_HGEN_H

#include <stdlib.h>
#include <stdio.h>
#include <iup.h>
#include <cd.h>
#include <cdiup.h>
#include <wd.h>

#include "plugin.h"
#include "plugin_hgen_ui.h"

typedef struct _hgen_ctx_ {
	Ihandle *frame;
} hgen_ctx_t;

plugin_t * hgen_plugin(plugin_t * plugin);

#endif