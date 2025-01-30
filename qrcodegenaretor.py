import qrcodegenaretor
import image
qr=qrcode.QRcode(
    version=15
    
)
data="https://file+.vscode-resource.vscode-cdn.net/c%3A/Users/PC/Pictures/tt.png?version%3D1735366690334"
qr.add_data(data)
qr.make(fit=True)
img=qr.make_image(fill="black",block_color="white")
img.save("test.png")
