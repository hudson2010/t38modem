/*
 * precompile.h
 *
 * OPAL application source file for sending/receiving faxes via T.38
 *
 * Copyright (c) 2008 Vox Lucida Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Open Phone Abstraction Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Contributor(s): ______________________________________.
 *
 * $Revision: 22200 $
 * $Author: rjongbloed $
 * $Date: 2009-03-12 03:26:39 +0100 (Do, 12. Mär 2009) $
 */

#include <ptlib.h>
#include <opal/manager.h>
#include <t38/t38proto.h>
#include <sip/sipep.h>
#include <h323/h323ep.h>
#include <lids/lidep.h>


// End of File ///////////////////////////////////////////////////////////////