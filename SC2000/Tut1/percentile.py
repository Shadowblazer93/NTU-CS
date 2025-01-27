s = """2.1 2.2 2.2 2.3 2.3 2.4 2.5 2.5 2.5 2.8 
2.8 2.9 2.9 3.0 3.1 3.1 3.2 3.3 3.3 3.3 
3.4 3.5 3.6 3.6 3.6 3.7 3.7 4.0 4.2 4.5 
4.9 5.1 5.3 5.3 5.7 6.0 6.1 7.1 7.8 7.9 
7.9 7.9 8.9"""
nums = [float(i) for i in s.split(" ")]
rank = lambda p: p*(len(nums)-1)/100
perc = lambda k: nums[int(k)]+(nums[int(k)+1]-nums[int(k)])*(k%int(k))

print(sum(nums)/len(nums))
print(perc(rank(25)))
print(perc(rank(50)))
print(perc(rank(75)))