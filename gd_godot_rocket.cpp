#include "gd_godot_rocket.h"

#include "Providers/GodotInterface/GodotRenderInterface.h"
#include "Providers/GodotInterface/GodotSystemInterface.h"
#include "Providers/GodotInterface/GodotFileInterface.h"

void GdRocketControl::_bind_methods() {
}

void GdRocketControl::_notification(int p_what) {

	switch (p_what) {

		case NOTIFICATION_READY: {

		} break;

		case NOTIFICATION_DRAW: {

		} break;

		case NOTIFICATION_PROCESS: {

		} break;
	}
}

GdRocketControl::GdRocketControl() {
}

GdRocketControl::~GdRocketControl() {
}
