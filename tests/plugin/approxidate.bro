# @TEST-EXEC: bro %INPUT >output
# @TEST-EXEC: btest-diff output


event bro_init()
	{
	print fmt("The time: %.6f", approxidate("tomorrow at 8pm EDT"));
	print fmt("The time: %.6f", approxidate("today at 4pm EDT"));

	#print fmt("The time: %.6f", approxidate("two days ago at 4pm"));
	#print fmt("The time: %.6f", approxidate("ten days ago at tea time"));
	#print fmt("The time: %.6f", approxidate("Oct  4 16:00:00"));
	}