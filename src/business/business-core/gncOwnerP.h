/********************************************************************\
 * gncOwnerP.h -- Business Interface:  Object OWNERs private file   * 
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652       *
 * Boston, MA  02111-1307,  USA       gnu@gnu.org                   *
 *                                                                  *
\********************************************************************/

/*
 * Copyright (C) 2001, 2002 Derek Atkins
 * Author: Derek Atkins <warlord@MIT.EDU>
 */

#ifndef GNC_OWNERP_H_
#define GNC_OWNERP_H_

#include "qofbook.h"
#include "gncOwner.h"

gboolean gncOwnerRegister (void);

/** The gncCloneOwner() routine makes a copy of the indicated
 *  owner, and one of its union elements, depending on the 
 *  owner type.
 */
GncOwner gncCloneOwner (const GncOwner *from, QofBook *book);

#endif /* GNC_OWNERP_H_ */