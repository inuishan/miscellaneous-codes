maximum' :: (Ord a) => [a] -> a 
maximum' [] = error "Empty list"
maximum' [x] = x
maximum' (x:xs)
	| x > maxtail = x
	| otherwise = maxtail
	where maxtail = maximum' xs


