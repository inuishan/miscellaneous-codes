removeNonUppercase :: [Char] -> [Char]
removeNonUppercase xs = [c|c<-xs,c `elem` ['A'..'Z']]
