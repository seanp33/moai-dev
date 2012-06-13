// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef	MOAITEST_SAMPLE_H
#define	MOAITEST_SAMPLE_H

#include <moaicore/moaicore.h>
#include <moaiext-test/MOAITest.h>
#include <moaiext-test/MOAITestMgr.h>

//================================================================//
// MOAITest_sample
//================================================================//
class MOAITest_sample :
	public MOAITest {
public:

	TEST_NAME ( "sample" )

	//----------------------------------------------------------------//
	void Staging ( MOAITestMgr& testMgr ) {
		
		testMgr.BeginTest ( "sample" );
		testMgr.Comment ( "comment" );
		testMgr.EndTest ( true );
	}
	
	//----------------------------------------------------------------//
	void Test ( MOAITestMgr& testMgr ) {
		
		testMgr.BeginTest ( "sample" );
		testMgr.Comment ( "comment" );
		testMgr.EndTest ( true );
	}
};

#endif
