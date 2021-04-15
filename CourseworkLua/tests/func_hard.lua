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

function complex.conjugate( cx )
	return setmetatable( { cx[1], -cx[2] }, complex_meta )
end

function complex.round( cx,idp )
	local mult = 10^( idp or 0 )
	return setmetatable( { math.floor( cx[1] * mult + 0.5 ) / mult,
		math.floor( cx[2] * mult + 0.5 ) / mult }, complex_meta )
end