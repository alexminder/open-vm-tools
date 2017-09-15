/*
 *  Author: bwilliams
 *  Created: Nov 16, 2015
 *
 *  Copyright (c) 2015 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 */

#ifndef LocalSecurityXml_h_
#define LocalSecurityXml_h_

namespace Caf {

	/// Streams the LocalSecurity class to/from XML
	namespace LocalSecurityXml {

		/// Adds the LocalSecurityDoc into the XML.
		void PERSISTENCEXML_LINKAGE add(
			const SmartPtrCLocalSecurityDoc localSecurityDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the LocalSecurityDoc from the XML.
		SmartPtrCLocalSecurityDoc PERSISTENCEXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif