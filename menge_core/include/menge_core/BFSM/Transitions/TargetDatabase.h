/*

License

Menge
Copyright � and trademark � 2012-14 University of North Carolina at Chapel Hill. 
All rights reserved.

Permission to use, copy, modify, and distribute this software and its documentation 
for educational, research, and non-profit purposes, without fee, and without a 
written agreement is hereby granted, provided that the above copyright notice, 
this paragraph, and the following four paragraphs appear in all copies.

This software program and documentation are copyrighted by the University of North 
Carolina at Chapel Hill. The software program and documentation are supplied "as is," 
without any accompanying services from the University of North Carolina at Chapel 
Hill or the authors. The University of North Carolina at Chapel Hill and the 
authors do not warrant that the operation of the program will be uninterrupted 
or error-free. The end-user understands that the program was developed for research 
purposes and is advised not to rely exclusively on the program for any reason.

IN NO EVENT SHALL THE UNIVERSITY OF NORTH CAROLINA AT CHAPEL HILL OR THE AUTHORS 
BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL 
DAMAGES, INCLUDING LOST PROFITS, ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS 
DOCUMENTATION, EVEN IF THE UNIVERSITY OF NORTH CAROLINA AT CHAPEL HILL OR THE 
AUTHORS HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

THE UNIVERSITY OF NORTH CAROLINA AT CHAPEL HILL AND THE AUTHORS SPECIFICALLY 
DISCLAIM ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE AND ANY STATUTORY WARRANTY 
OF NON-INFRINGEMENT. THE SOFTWARE PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND 
THE UNIVERSITY OF NORTH CAROLINA AT CHAPEL HILL AND THE AUTHORS HAVE NO OBLIGATIONS 
TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.

Any questions or comments should be sent to the authors {menge,geom}@cs.unc.edu

*/

/*!
 *	@file		TargetDatabase.h
 *	@brief		Central database for querying available behavior transition targets.
 *
 *	For transition targets to be used in the finite state machine, they must register 
 *	themselves into the TargetDatabase.  This is done via the PluginEngine.
 */

#ifndef __TARGET_DATABASE_H__
#define __TARGET_DATABASE_H__

#include "ElementDatabase.h"
#include "Transitions/TargetFactory.h"
#include "Transitions/Target.h"

namespace Menge {

	namespace BFSM {
		/*!
		 *	@brief		The database of registered transition targets.
		 */
		typedef ElementDB< TargetFactory, TransitionTarget > TargetDB;

	}	// namespace BFSM

#ifndef DOXYGEN_SHOULD_SKIP_THIS

	/*!
	 *	@brief		Explicit specialization of addBuiltins for the TransitionTarget Database
	 */
	template<> void ElementDB< BFSM::TargetFactory, BFSM::TransitionTarget>::addBuiltins();
	
	/*!
	 *	@brief		Explicit specialization of getElementName for the TransitionTarget Database
	 */
	template<> std::string ElementDB< BFSM::TargetFactory, BFSM::TransitionTarget >::getElementName();

#endif	// DOXYGEN_SHOULD_SKIP_THIS

}	// namespace Menge
#endif	// __TARGET_DATABASE_H__
