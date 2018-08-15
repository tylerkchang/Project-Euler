import Data.List (union)

answer = sum (union [3,6 .. 999] [5,10 .. 999])

main = do
	putStr "Solution: "
	putStrLn $ show answer
