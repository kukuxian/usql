/******************************************************************
*
* uSQL for C++
*
* SQLLimit.h
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLLIMIT_H
#define CG_USQL_SQLLIMIT_H

#include <cybergarage/sql/SQLNode.h>

namespace uSQL {

class SQLLimit : public SQLNode {

public:

	SQLLimit() {
    	setType(LIMIT);
    }
    
    std::string &toString(std::string &buf) {
	    std::ostringstream oss;
	    std::string childNodeStr;
	    oss << "LIMIT " << childNodesToString(childNodeStr, ",");
    	buf = oss.str();
		return buf;
    }
};

}

#endif
