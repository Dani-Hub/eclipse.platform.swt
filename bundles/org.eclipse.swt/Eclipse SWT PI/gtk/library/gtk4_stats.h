/*******************************************************************************
 * Copyright (c) 2000, 2021 IBM Corporation and others.
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Note: This file was auto-generated by org.eclipse.swt.tools.internal.JNIGenerator */
/* DO NOT EDIT - your changes will be lost. */

#ifdef NATIVE_STATS
extern int GTK4_nativeFunctionCount;
extern int GTK4_nativeFunctionCallCount[];
extern char* GTK4_nativeFunctionNames[];
#define GTK4_NATIVE_ENTER(env, that, func) GTK4_nativeFunctionCallCount[func]++;
#define GTK4_NATIVE_EXIT(env, that, func) 
#else
#ifndef GTK4_NATIVE_ENTER
#define GTK4_NATIVE_ENTER(env, that, func) 
#endif
#ifndef GTK4_NATIVE_EXIT
#define GTK4_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	gtk_1box_1append_FUNC,
	gtk_1box_1insert_1child_1after_FUNC,
	gtk_1box_1prepend_FUNC,
	gtk_1button_1new_1from_1icon_1name_FUNC,
	gtk_1button_1set_1child_FUNC,
	gtk_1calendar_1get_1date_FUNC,
	gtk_1calendar_1select_1day_FUNC,
	gtk_1calendar_1set_1show_1day_1names_FUNC,
	gtk_1calendar_1set_1show_1heading_FUNC,
	gtk_1calendar_1set_1show_1week_1numbers_FUNC,
	gtk_1check_1button_1get_1active_FUNC,
	gtk_1check_1button_1set_1active_FUNC,
	gtk_1check_1button_1set_1group_FUNC,
	gtk_1check_1button_1set_1inconsistent_FUNC,
	gtk_1check_1button_1set_1use_1underline_FUNC,
	gtk_1hsv_1to_1rgb_FUNC,
	gtk_1im_1context_1filter_1keypress_FUNC,
	gtk_1rgb_1to_1hsv_FUNC,
} GTK4_FUNCS;