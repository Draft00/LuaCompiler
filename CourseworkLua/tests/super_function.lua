local function medianOf3(t, low, high, comp)
	
	local middle = math.floor( ( low + high ) / 2 )
	
	if comp(t[middle], t[low]) then
		
		t[middle], t[low] = t[low], t[middle]
		
	end
	
	if comp(t[high], t[low]) then
		
		t[high], t[low] = t[low], t[high]
		
	end
	
	if comp(t[high], t[middle]) then
		
		t[high], t[middle] = t[middle], t[high]
		
	end
	
	t[middle], t[high - 1] = t[high - 1], t[middle]
	
	return t[high - 1]
	
end