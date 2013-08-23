quicksort' :: (Ord a) => [a] -> [a]  
quicksort' [] = []
quicksort' (x:xs) =
	let smallsorted = quicksort' [a | a <- xs, a <= x]
		bigsorted = quicksort' [a | a <- xs, a > x]
	in  smallsorted ++ [x] ++ bigsorted	



--quicksort' :: (Ord a) => [a] -> [a]  
--quicksort' [] = []  
--quicksort' (x:xs) =   
--    let smallersorted = quicksort' [a | a <- xs, a <= x]  
--        bigsorted = quicksort' [a | a <- xs, a > x]  
--    in  smallersorted ++ [x] ++ bigsorted