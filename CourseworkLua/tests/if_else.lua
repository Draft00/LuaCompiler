if sign == "+" then
	imag = _retone
elseif s == "-" then
	imag = _retminusone
elseif s == "-" then
	imag = _retminusone
else
	imag = _retminusone
end

if sign == "+" then
	imag = _retone
elseif s == "-" then
	imag = _retminusone
elseif s == "-" then
	imag = _retminusone
else
	imag = _retminusone
end

if imag == "" then
	if sign == "+" then
		imag = _retone
	else
		imag = _retminusone
	end
elseif sign == "+" then
	imag = loadstring("return tonumber("..imag..")")
else
	imag = loadstring("return tonumber("..sign..imag..")")
end
real = loadstring("return tonumber("..real..")")
if real and imag then
	return setmetatable( { real(),imag() }, complex_meta )
end

if string.lower(string.sub(imag,1,1)) ~= "e" then
	imag = loadstring("return tonumber("..imag..")")
	if imag then
		return setmetatable( { 0,imag() }, complex_meta )
	end
end