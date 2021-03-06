/*****************************************************************************
 * common.h
 *
 * bc-cat module unit test - common header
 *
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *   
 *   Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 *   
 *   Neither the name of Texas Instruments Incorporated nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
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
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/
#ifndef __COMMON_H__
#define __COMMON_H__

#include <GLES2/gl2.h>
#include <EGL/egl.h>
#include <GLES2/gl2ext.h>
#include <bc_cat.h>

//typedef void (GL_APIENTRYP PFNGLTEXBINDSTREAMIMGPROC) (GLint device, GLint deviceoffset);
extern PFNGLTEXBINDSTREAMIMGPROC glTexBindStreamIMG;
#define GL_TEXTURE_STREAM_IMG  0x8C0D

extern int gQuit;

extern EGLDisplay dpy;
extern EGLSurface surface;

void signalHandler(int signum);
int get_disp_resolution(int *w, int *h);
int initEGL(int *surf_w, int *surf_h, int profile);
void deInitEGL();
int init_bcdev (unsigned int pix_frmt, int width, int height, int num_bufs);
int reinit_bcdev (unsigned int pix_frmt, int width, int height, int num_bufs, int bcdevId);
void deinit_bcdev (int bcdevId );
int modify_bufAddr (int bcdevId, int idx, unsigned long buf_paddr);

#endif /* __COMMON_H__ */
