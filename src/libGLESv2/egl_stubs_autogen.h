// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from egl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// egl_stubs_autogen.h: Stubs for EGL entry points.

#ifndef LIBGLESV2_EGL_STUBS_AUTOGEN_H_
#define LIBGLESV2_EGL_STUBS_AUTOGEN_H_

#include <EGL/egl.h>
#include <EGL/eglext.h>

#include "common/PackedEGLEnums_autogen.h"

namespace gl
{
class Context;
}  // namespace gl

namespace egl
{
class AttributeMap;
class Device;
class Display;
class Image;
class Stream;
class Surface;
class Sync;
class Thread;
struct Config;

EGLBoolean BindAPI(Thread *thread, EGLenum api);
EGLBoolean BindTexImage(Thread *thread,
                        egl::Display *dpyPacked,
                        Surface *surfacePacked,
                        EGLint buffer);
EGLBoolean ChooseConfig(Thread *thread,
                        egl::Display *dpyPacked,
                        const AttributeMap &attrib_listPacked,
                        EGLConfig *configs,
                        EGLint config_size,
                        EGLint *num_config);
EGLint ClientWaitSync(Thread *thread,
                      egl::Display *dpyPacked,
                      Sync *syncPacked,
                      EGLint flags,
                      EGLTime timeout);
EGLBoolean CopyBuffers(Thread *thread,
                       egl::Display *dpyPacked,
                       Surface *surfacePacked,
                       EGLNativePixmapType target);
EGLContext CreateContext(Thread *thread,
                         egl::Display *dpyPacked,
                         Config *configPacked,
                         gl::Context *share_contextPacked,
                         const AttributeMap &attrib_listPacked);
EGLImage CreateImage(Thread *thread,
                     egl::Display *dpyPacked,
                     gl::Context *ctxPacked,
                     EGLenum target,
                     EGLClientBuffer buffer,
                     const AttributeMap &attrib_listPacked);
EGLSurface CreatePbufferFromClientBuffer(Thread *thread,
                                         egl::Display *dpyPacked,
                                         EGLenum buftype,
                                         EGLClientBuffer buffer,
                                         Config *configPacked,
                                         const AttributeMap &attrib_listPacked);
EGLSurface CreatePbufferSurface(Thread *thread,
                                egl::Display *dpyPacked,
                                Config *configPacked,
                                const AttributeMap &attrib_listPacked);
EGLSurface CreatePixmapSurface(Thread *thread,
                               egl::Display *dpyPacked,
                               Config *configPacked,
                               EGLNativePixmapType pixmap,
                               const AttributeMap &attrib_listPacked);
EGLSurface CreatePlatformPixmapSurface(Thread *thread,
                                       egl::Display *dpyPacked,
                                       Config *configPacked,
                                       void *native_pixmap,
                                       const AttributeMap &attrib_listPacked);
EGLSurface CreatePlatformWindowSurface(Thread *thread,
                                       egl::Display *dpyPacked,
                                       Config *configPacked,
                                       void *native_window,
                                       const AttributeMap &attrib_listPacked);
EGLSync CreateSync(Thread *thread,
                   egl::Display *dpyPacked,
                   EGLenum type,
                   const AttributeMap &attrib_listPacked);
EGLSurface CreateWindowSurface(Thread *thread,
                               egl::Display *dpyPacked,
                               Config *configPacked,
                               EGLNativeWindowType win,
                               const AttributeMap &attrib_listPacked);
EGLBoolean DestroyContext(Thread *thread, egl::Display *dpyPacked, gl::Context *ctxPacked);
EGLBoolean DestroyImage(Thread *thread, egl::Display *dpyPacked, Image *imagePacked);
EGLBoolean DestroySurface(Thread *thread, egl::Display *dpyPacked, Surface *surfacePacked);
EGLBoolean DestroySync(Thread *thread, egl::Display *dpyPacked, Sync *syncPacked);
EGLBoolean GetConfigAttrib(Thread *thread,
                           egl::Display *dpyPacked,
                           Config *configPacked,
                           EGLint attribute,
                           EGLint *value);
EGLBoolean GetConfigs(Thread *thread,
                      egl::Display *dpyPacked,
                      EGLConfig *configs,
                      EGLint config_size,
                      EGLint *num_config);
EGLContext GetCurrentContext(Thread *thread);
EGLDisplay GetCurrentDisplay(Thread *thread);
EGLSurface GetCurrentSurface(Thread *thread, EGLint readdraw);
EGLDisplay GetDisplay(Thread *thread, EGLNativeDisplayType display_id);
EGLint GetError(Thread *thread);
EGLDisplay GetPlatformDisplay(Thread *thread,
                              EGLenum platform,
                              void *native_display,
                              const AttributeMap &attrib_listPacked);
__eglMustCastToProperFunctionPointerType GetProcAddress(Thread *thread, const char *procname);
EGLBoolean GetSyncAttrib(Thread *thread,
                         egl::Display *dpyPacked,
                         Sync *syncPacked,
                         EGLint attribute,
                         EGLAttrib *value);
EGLBoolean Initialize(Thread *thread, egl::Display *dpyPacked, EGLint *major, EGLint *minor);
EGLBoolean MakeCurrent(Thread *thread,
                       egl::Display *dpyPacked,
                       Surface *drawPacked,
                       Surface *readPacked,
                       gl::Context *ctxPacked);
EGLenum QueryAPI(Thread *thread);
EGLBoolean QueryContext(Thread *thread,
                        egl::Display *dpyPacked,
                        gl::Context *ctxPacked,
                        EGLint attribute,
                        EGLint *value);
const char *QueryString(Thread *thread, egl::Display *dpyPacked, EGLint name);
EGLBoolean QuerySurface(Thread *thread,
                        egl::Display *dpyPacked,
                        Surface *surfacePacked,
                        EGLint attribute,
                        EGLint *value);
EGLBoolean ReleaseTexImage(Thread *thread,
                           egl::Display *dpyPacked,
                           Surface *surfacePacked,
                           EGLint buffer);
EGLBoolean ReleaseThread(Thread *thread);
EGLBoolean SurfaceAttrib(Thread *thread,
                         egl::Display *dpyPacked,
                         Surface *surfacePacked,
                         EGLint attribute,
                         EGLint value);
EGLBoolean SwapBuffers(Thread *thread, egl::Display *dpyPacked, Surface *surfacePacked);
EGLBoolean SwapInterval(Thread *thread, egl::Display *dpyPacked, EGLint interval);
EGLBoolean Terminate(Thread *thread, egl::Display *dpyPacked);
EGLBoolean WaitClient(Thread *thread);
EGLBoolean WaitGL(Thread *thread);
EGLBoolean WaitNative(Thread *thread, EGLint engine);
EGLBoolean WaitSync(Thread *thread, egl::Display *dpyPacked, Sync *syncPacked, EGLint flags);
}  // namespace egl
#endif  // LIBGLESV2_EGL_STUBS_AUTOGEN_H_
