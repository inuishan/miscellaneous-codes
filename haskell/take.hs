take' n x
	| n<=0 = []
take' n [] = []
take' n (x:xs) = x:take' (n-1) xs 	