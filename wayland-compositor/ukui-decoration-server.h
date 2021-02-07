/* Generated by wayland-scanner 1.18.0 */

#ifndef CUSTOM_SERVER_PROTOCOL_H
#define CUSTOM_SERVER_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-server.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_custom The custom protocol
 * @section page_ifaces_custom Interfaces
 * - @subpage page_iface_ukui_decoration - UKUI Wayland extension
 * @section page_copyright_custom Copyright
 * <pre>
 *
 * Copyright (C) 2015 The Qt Company Ltd.
 * Contact: http://www.qt.io/licensing/
 *
 * This file is part of the examples of the Qt Wayland module
 *
 * $QT_BEGIN_LICENSE:BSD$
 * You may use this file under the terms of the BSD license as follows:
 *
 * "Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in
 * the documentation and/or other materials provided with the
 * distribution.
 * * Neither the name of The Qt Company Ltd nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 *
 * $QT_END_LICENSE$
 * </pre>
 */
struct ukui_decoration;
struct wl_surface;

/**
 * @page page_iface_ukui_decoration ukui_decoration
 * @section page_iface_ukui_decoration_desc Description
 *
 * This example shows how to add extra functionality to Wayland
 * through an extension. This is the global object of the extension.
 * @section page_iface_ukui_decoration_api API
 * See @ref iface_ukui_decoration.
 */
/**
 * @defgroup iface_ukui_decoration The ukui_decoration interface
 *
 * This example shows how to add extra functionality to Wayland
 * through an extension. This is the global object of the extension.
 */
extern const struct wl_interface ukui_decoration_interface;

/**
 * @ingroup iface_ukui_decoration
 * @struct ukui_decoration_interface
 */
struct ukui_decoration_interface {
	/**
	 * Register a surface with the ukui decoration extension
	 *
	 * Inform the compositor that the client has a new surface that
	 * is covered by the extension.
	 */
	void (*register_surface)(struct wl_client *client,
				 struct wl_resource *resource,
				 struct wl_resource *surface);
	/**
	 * Move the surface around for a little while
	 *
	 * The compositor should perform a move animation on the surface.
	 * @param mode decoration mode
	 */
	void (*set_ukui_decoration_mode)(struct wl_client *client,
					 struct wl_resource *resource,
					 struct wl_resource *surface,
					 uint32_t mode);
};


/**
 * @ingroup iface_ukui_decoration
 */
#define UKUI_DECORATION_REGISTER_SURFACE_SINCE_VERSION 1
/**
 * @ingroup iface_ukui_decoration
 */
#define UKUI_DECORATION_SET_UKUI_DECORATION_MODE_SINCE_VERSION 1

#ifdef  __cplusplus
}
#endif

#endif